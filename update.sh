git add .
echo "Type commit message"
read x
git commit -m "$x"
git push origin master
