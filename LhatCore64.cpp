// LhatCore64.cpp : 定义 DLL 的导出函数。
//

#include "pch.h"
#include "framework.h"
#include "LhatCore64.h"

LHATCORE64_API string pack(string rawMessage, string chatFrom, string chatWith, string messageType)
{
    time_t nowTime = time(NULL); //获取时间戳
    int intTime = (int)nowTime; //转换为int
    Json::FastWriter writer; //JSON封装者
    Json::Value lm; //Lhat消息类型的JSON结构形式
    /*
    lm.by = chatFrom;
    lm.to = chatWith;
    lm.time = intTime;
    lm.type = messageType;
    lm.message = rawMessage;
    */
    lm["by"] = chatFrom;
    lm["to"] = chatWith;
    lm["type"] = messageType;
    lm["time"] = intTime;
    lm["message"] = rawMessage;
    return writer.write(lm);
}
LHATCORE64_API Json::Value unpack(string jsonString)
{
    Json::Reader reader; //JSON读取器
    Json::Value lmessage; //JSON封装器
    if (!reader.parse(jsonString, lmessage))
    {
        lmessage["type"] = "NOT_JSON_MESSAGE";
    }
    return lmessage;
}
