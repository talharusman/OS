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
![image](https://github.com/user-attachments/assets/026ed795-e957-4bfc-8da6-a5e5d6be2669)



