# What Git exactly do? 🤓

**Git** is a version control system.

It helps you to :
1. Track changes in your files,
2. Go back in time if sth breaks,
3. Work in parallel with other people,
4. Keep history of what you have done.

---

## Git Commands 

### git init 🗂️

``` git
git init
```
- The first command when you want to using your Git.
it initializes a new git repository inside your folder.

***Hey git, follow me !*** 😁

when you command `git init`, git create a hidden folder called `.git` inside of your project directory. This folder contain everything that git need :

 ```
 git init = 
 Hey Git, Please start watching this folder and be ready to track my files and projects.
 ```

---

### Git Area 💻

We have 3 main area in Git :

1. Working Directory: where your actual code are. (What you edit)

2. Staging Area: Where to put your changes you want to save. (A waiting room)

3. Repository: The permanent history of your projects inside git. (Commit History)

---

### What is Stage ? 📥

Staging means you selecting which changes go to next snapshot.  The Main command is : 

```git
git add FileName
```

Or for add everything 

```git
git add .
```

Or for add files with similar name

```git 
git add "Pro*"
```
add all files that they have  ***Pro***  on their names.

---
### What is Commit ? 🖇️

Commiting means saving a snapshop of everything that's stage. After commiting, the snapshop is saved in git repository history forever. The command is :

```git 
git commit -m "Your Message"
```
---

### Git Status 📌

```git
git status
```
It shows your current state of your working directory and stage area. It shows us :

1. Which files tracked by git,
2. Which files have been changed but not staged,
3. Which files are staged and ready to commit,
4. Are there any untracked file ?

---

### Git Log 📑

```git
git log
```

A report of what git have done.
1. **Commit a3cd...** = Each commit has unique ID.
2. **Author** = Who made the commit ?
3. **Date** = When it was made ?
4. **Message** = What sb wrote in -m "X" during commiting.

---

### Git Diff ➖➕

```git 
git diff
```
What you changed but haven't staged yet.
It shows you the exact changes ***inside the files***. It tells you what's different between :

1. Working Directory Vs. Staging Area
2. Staging area Vs. Last commit 
   - In this case you may see two elements (-)/(+).

   ```diff
   - It means some lines have been removed.
   
   + It means some lines have been added.
   ```


```git
git diff --staged 
```
What has staged but not commited yet.
(Show me what changes happen in stage area)

```git 
git diff Head
```
compair working dir + staging with last commit.

---

### Git Reset 🔙

```git
git reset FileName
```
It removes your file from stage area(Index).
The file is still changed in your working directory and your edits are safe. 
Assume you change your file and you stage it by `git add FileName`, then you change your mind. So you can use `git reset FileName`. All of your changes are still there but it unstaged. It means not in commit list anymore. 

---

### Git Checkout / Git Swich / Git Restore 🔁

```git
git checkout --FileName
```
It completely discards your changes. 
This command has ***two main roles*** :

1. ***Restoring files*** = Throw away your local changes in your files and reset it to the last commited version. In this command, ***your edits and changes will be lost***. Mostly it uses when you mess sth up and you won't to start it fresh. (Let everything go 🫣) 

```git 
git checkout --FileName
```

2. ***Swiching branch*** = In this case you swich your working directory to the branch you choose. All of your files update and match to the new branch. And of course that your `Head` moves.

```git 
git checkout main 
```

```git
git checkout Branch Name
```

After while `git checkout` split into 2 clearer commands :

1. `git swich` = For changing your branch.

2. `git restore` = For discarding changes in your files.

>[!NOTE]
> The `git checkout` is still working.

#### As a review :

1. `git checkout branch` = Move to another branch.
2. `git checkout --File Name ` = Discard changes in your files.
3. `git checkout commit` = Explor an old commit.

---

## What is exactly *branch* means ? 🔀

Branch is basicaly a pointer to a commit. The default branch usually called ***main*** (Used to master).
It allows us to develope features fix bugs or even test the expriments without missing up the main code.

Simple course :

1. `git branch` = it shows all branches and shows the current branch with (*).

2. `git branch New-branch-name` = creates new branch but doesn't swich to it yet.

3. `git checkout New-branch-name` = Now it swiches to the new branch.

4. `git checkout main`  = swich to the main branch.

5. `git merge New-branch-name` = Bring the changes from the new branch to main branch.

6. `git branch -d New-branch-name` = Deletes the local branch (New-branch) **only if it has already been merged** into another branch(usually main). If it hasn't been merged, Git will refuse to delete it to protect your work. 

---

 