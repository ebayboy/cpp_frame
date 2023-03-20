

# tools
+ google/gtest 单元测试
+ google/benchmark 性能测试
+ gperftools:  gperftools是Google提供的一套工具(tcmalloc) 性能测试
+ google/sanitizers  AddressSanitizer, ThreadSanitizer, MemorySanitizer

# cpp编程脚手架 (purposes: lightly)
+ log: git@github.com:gabime/spdlog.git 
+ json: git@github.com:nlohmann/json.git
+ YAML: git@github.com:jbeder/yaml-cpp.git

+ Base64: Agit@github.com:ReneNyffenegger/cpp-base64.git)  
+ AES: git@github.com:SergeyBel/AES.git) 
+ MD5: git@github.com:JieweiWei/md5.git

+ mysql: git@github.com:mysql/mysql-connector-cpp.git
+ redis: git@github.com:redis/hiredis.git

+ protobuf: git@github.com:protocolbuffers/protobuf.git
+ grpc: git@github.com:grpc/grpc.git

+ nginx 
	- http 10w行
	- total 20w行
+ muduo: network lib
+ handy 4/7层网络框架(核心代码4888） [study for c++11, muduo的C++11版本]
+ game server framework: skynet (lua + c), 可做tcpserver框架 [重点框架]
	- 核心代码5590行 \ 2000行C代码service \ 3000行lua service
+ web server framework/rest api: oatpp 核心代码97822, 代码行数太多]
	- core 21926 \ web 14279 \ network 5201 \ codegen 2472 \ parser 2319 \ encoding 1056 \ orm 964 \ algorithm 146

# 非重要框架
+ http lib: cpp-httplib
+ tcp lib:
+ tcp server framework: sylar [视频教程](https://www.bilibili.com/video/av53602631/?from=www.sylar.top)
+ mq lib: zero mq, cppzmq(https://github.com/zeromq/cppzmq.git)
+ clickhouse  实时计算数据库
+ CProxy 内网穿透， 类似于frp
+ base64/aes/md5等加密、解密: cryptopp  【重量级】
+ leveldb: git@github.com:google/leveldb.git
