// 2019, 11/27, 7:30, by Queenie
// Insert Sort

// 對陣列 ar 內元素進行排序
// cmp 為內建比較函數
void sortOut(void **ar, int n, int(*cmp)(const void *, const void *)){
    int j;
    for(j = 1; j < n; j++){

        int i = j -1; // 陣列 ar 中 , 第 i 個元素排在 第 j 個元素前。
        void *value = ar[j]; // 將陣列 ar 的第 j 個元素配置到命名為 value 的指標容器內。

        // 迴圈中的小迴圈
        // 驗證機制，起碼第幾個元素的 index 不為負數。（因為負數不合情理）
        // 敘述句第二欄位表示了重複元素
        // 則結果需要再做刪除。利用 i-- 刪除重複的 index 指向的重複元素
        while(i >= 0 && cmp(ar[i], value) > 0) {
            ar[i+1] = ar[i];
            i--;
        }

        ar[i+1] = value;
    }
}


int main(){
    void sortOut();
    return 0;
}
