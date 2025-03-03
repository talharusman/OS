# code
```
#!/bin/bash

read -p "Enter directory path: " source_dir

if [[ -d $source_dir ]]; then
    backup_file="backup_$(date +%Y%m%d_%H%M%S).tar.gz"
    tar -czf "$backup_file" "$source_dir"
    echo "Backup Created Successfully!"
    echo "Backup File: $backup_file"
else
    echo "Error: Directory Not Found!"
fi
```
# output
