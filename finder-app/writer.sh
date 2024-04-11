#!/bin/bash

# 接收参数
writefile=$1
writestr=$2

# 检查参数
if [ -z "$writefile" ] || [ -z "$writestr" ]; then
    echo "需要提供两个参数：文件的完整路径和要写入的文本字符串。"
    exit 1
fi

# 创建包含文件的路径，如果它不存在的话
mkdir -p "$(dirname "$writefile")"

# 尝试写入文件
echo "$writestr" > "$writefile" 2>/dev/null

if [ $? -ne 0 ]; then
    echo "无法创建或写入文件：$writefile"
    exit 1
fi

echo "文件写入成功：$writefile"

