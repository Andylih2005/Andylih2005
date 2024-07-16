# 使用 GCC 基礎鏡像
FROM gcc:latest

# 設置工作目錄
WORKDIR /usr/src/app

# 複製當前目錄下的 test.cpp 到工作目錄中
COPY test.cpp .

# 編譯 test.cpp
RUN g++ -o test test.cpp

# 設置容器啟動時執行的命令
CMD ["./test"]
