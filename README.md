
# cpp编程脚手架
+ json: nlohmann
+ log: spdlog

+ google/gtest 单元测试
+ google/benchmark 性能测试
+ google/protobuf 数据交换协议
+ google/grpc 微服务框架
+ google/leveldb NoSQL数据库lib
+ gperftools:  gperftools是Google提供的一套工具(tcmalloc) 性能测试
+ google/sanitizers  AddressSanitizer, ThreadSanitizer, MemorySanitizer

+ nginx 
	- http 10w行
	- total 20w行
+ handy 4/7层网络框架(核心代码4888） [study for c++11
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
