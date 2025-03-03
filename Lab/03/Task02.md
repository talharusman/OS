# code
```
read -p "Enter the sentence: " sentence

vow=0
len=${#sentence}

for ((i = 0; i < $len; i++))
do
    char=${sentence:$i:1}

    if [[ $char == "a" || $char == "e" || $char == "i" || $char == "o" || $char == "u" || $char == "A" || $char == "E" || $char == "I" || $char == "O" || $char == "U" ]];
    then
        ((vow++))
    fi
done

echo "Number of vowels: $vow"
```
# output
![image](https://github.com/user-attachments/assets/bd097f8a-bf72-4e5d-82e5-13c16bba03ea)

