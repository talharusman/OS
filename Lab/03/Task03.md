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
![image](https://github.com/user-attachments/assets/fa0b1791-a178-4493-ab10-863398623d88)

# file content
![image](https://github.com/user-attachments/assets/fea6140e-eced-46d6-8dc6-fbcf99ec6fa3)


