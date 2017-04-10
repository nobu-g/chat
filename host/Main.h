#pragma once

#include "DxLib.h"
#include <vector>
#include <string>
using namespace std;

#define PORT    50000

// メインクラス
class Main {
public:
    void Init();
    void Run();
    bool MessageLoop();
    void End();
};

// 通信クラス
class Network {
    vector<string> talk;    // チャットログ
    int hNet;               // ネットワークハンドル
    IPDATA ip;              // 接続先IPアドレスデータ
public:
    Network();
    void StartListen();     // 接続受付を開始
    bool Listen();          // 新しい接続があればtrueを返す
    bool isConnected();     // 接続が成功したかどうか
    void Establish();       // 接続を確立する
    bool Update();          // 毎ループ実行
    void Draw();            // 描画
    void Send();            // 相手マシンにデータを送信
};

// 文字入力クラス
class Input {

};
