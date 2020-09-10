//　　　　　　/＾>》, -―‐‐＜＾}
//　　　 　./:::::/,≠´:::::;:::ヽ
//　　　　/::::::〃:::::::::／:丿ハ
//　　　./:::::::i{l|:::::／  }::::}
//　　 /:::::::::瓜イ-‐  ´‐ ,'::ﾉ
//　 ./:::::::::|ﾉﾍ{､　(ﾌ _ノﾉ:::イ
//　 |:::::::::::|／}｀ ｽ/￣￣￣￣￣/
//.　|:::::::::|(_::::つ/　 FMV　 /　ｶﾀｶﾀ
//.￣￣￣￣￣￣￣￣￣＼/＿＿＿＿＿/￣￣￣￣￣￣￣

#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)               //repマクロ
#define REP(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i) //多倍長
#define all(x) (x).begin(), (x).end()                              //先頭と最後を渡す
#define SZ(x) ((int)(x).size())                                    //sizeの返り値をunsigned int型からint型にする
//短くするだけ
#define pb push_back
#define mp make_pair
// 名前の変更
#define y0 y3487465
#define y1 y8687969
#define j0 j1347829
#define j1 j234892
#define next asdnext
#define prev asdprev

#define cauto const auto &                                      //これいる？
#define UNIQUE(v) v.erase(unique(v.begin(), v.end()), v.end()); //なにこれ
#define itn int                                                 //これいる？
// longlong型を省略して
typedef long long lint;

/* 最大値を更新するテンプレート */
template <class T>
bool umax(T &a, const T &b)
{
  if (a < b)
  {
    a = b;
    return 1;
  }
  return 0;
}
/* 最小値を更新するテンプレ */
template <class T>
bool umin(T &a, const T &b)
{
  if (b < a)
  {
    a = b;
    return 1;
  }
  return 0;
}

int main()
{
}