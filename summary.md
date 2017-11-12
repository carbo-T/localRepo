***********************version control using git and github*********************
1.create local directory

ls -a		mkdir		rm -r directory		cd


2.initialize th directory

git init
git clone git@github.com:carbo-T/******.git


3.manipulate local directory

check status: 
	git status

check differences: 
	git diff

add modified files to temporary space: 
	git add 

store changes into repository:
	git commit -m "message"


4.ssh configuration
ssh-agent bash
ssh-keygen -t rsa -C "email address"
upload the public key into github
ssh-add id_rsa
ssh -T git@github.com


5.link to the remote repository

check remote repository:
	git remote -v
	git remote show remoteRepoName

add a ref to a remote repository:
	git remote add repoName url

check branch info in local repo
	git branch

switch to a branch
	git checkout branchName

add/del a branch
	git checkout -b branchName
	git branch -d branchName

upload and download
	git push remoteName localBranch:remoteBranch
	git pull remoteName remoteBranch

merge a branch
	git merge branchName

rollback to previous versions
	git reset --hard HEAD^^
	git reset verID

store scene and recover, pop = apply and drop
	git stash
	git stash list
	git stash apply/drop
	git stash pop

