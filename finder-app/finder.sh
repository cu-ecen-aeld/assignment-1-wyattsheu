#!/bin/bash

# 接收参数
filesdir=$1
searchstr=$2

# 检查参数
if [ -z "$filesdir" ] || [ -z "$searchstr" ]; then
    echo "两个参数都需要提供：目录路径和搜索字符串。"
    exit 1
fi

# 检查目录是否存在
if [ ! -d "$filesdir" ]; then
    echo "提供的目录不存在：$filesdir"
    exit 1
fi

# 计算文件数
file_count=$(find $filesdir -type f | wc -l)

# 计算匹配行数
match_count=$(grep -r "$searchstr" $filesdir | wc -l)

# 打印结果
echo "The number of files are $file_count  and the number of matching lines are $match_count"

