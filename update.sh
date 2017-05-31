echo "Type commit message"
git add .
read x
git commit -m "$x"
git push origin master
