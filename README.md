# Lhat-Core
## 开发说明 DEVELOPING INSTRUCTIONS
> 项目基于C++和JsonCpp库开发。  
简单说明一下Lhat的核心怎么用：  
下载release页面的文件，里面包含lib和dll文件，但是没有.h文件，你需要自行extern这些函数
需要extern的函数：
- `std::string pack(std::string rawMessage, std::string chatFrom, std::string chatWith, std::string messageType);`  
- `Json::Value unpack(std::string jsonString);`  
更多的用法，我们以后再详细补全。  
## 介绍 INTRODUCE  
没有什么介绍的，它是Lhat C++版本的一份子，它缺一不可，就这么简单。  
#### Powered by 3rdBit Studio  