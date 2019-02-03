N = int(input())

def dfs(s): # 文字列 s で始まる七五三数の個数
    if int(s) > N:
        return 0
    # 下記代入式で出現している構文まとめ
    # all: 組み込み関数の一種．リストやタプルなどのイラレタブルオブジェクトの要素が全てtrueならば，trueを返す．
    # xxx if condition else yyy: pythonの三項演算子．ifの条件式がtrueならばxxxが，そうでなければyyyと評価される．

    ret = 1 if all(s.count(c) > 0 for c in '753') else 0 # s 自体が七五三数なら +1
    for c in '753':
        ret += dfs(s + c)
    return ret

print(dfs('0')) # 本当は dfs('') と書きたいが 4 行目でのエラーを防ぐため仕方なく