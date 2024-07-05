# 使用官方的 Ubuntu 基礎鏡像
FROM ubuntu:latest

# 安裝所需的包
RUN apt-get update && \
    apt-get install -y g++ && \
    apt-get clean && \
    rm -rf /var/lib/apt/lists/*

# 設置工作目錄
WORKDIR /app

# 複製當前目錄的內容到工作目錄
COPY . .

# 編譯 C++ 源文件
RUN g++ -o my_app main.cpp

# 設置容器啟動命令
CMD ["./my_app"]
