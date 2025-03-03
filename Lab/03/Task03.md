# code 
```read -p "Enter the filename: " filename

if [[ -e $filename ]]; then
    # Appending current date and time
    echo "$(date)" >> $filename
    echo "Date and time appended to $filename"
else
    echo "File does not exist!"
fi
```
# output

# file content

