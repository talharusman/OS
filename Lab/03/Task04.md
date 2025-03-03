# code
```
read -p "Enter the file or directory name: " file

if [[ -e $file ]]; 
then
    echo "$file exists"

    if [[ -f $file ]]; 
    then
        echo "$file is a Regular File"
    elif [[ -d $file ]]; 
    then
        echo "$file is a Directory"
    fi

    if [[ -r $file ]]; 
    then
        echo "Readable"
    fi
    
    if [[ -w $file ]]; then
        echo "Writable"
    fi
    
    if [[ -x $file ]]; 
    then
        echo "Executable"
    fi
    
    if [[ -s $file ]];
    then
        echo "File is Not Empty"
    fi

    if [[ $file == .* ]]; 
    then
        echo "It is a Hidden File"
    fi
else
    echo "$file does not exist"
fi
```
# output
![image](https://github.com/user-attachments/assets/396a94df-0958-4564-9bf4-5f4c4a5498ca)


