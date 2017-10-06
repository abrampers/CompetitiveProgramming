int blomdp(int pos, int rem) {
    int ret = -1;
    if (ret == -1) {
        if (pos == n) {
            // basecase
            ret = 0;
        } else {
            if (rem - w[pos] > 0) {
                // bisa diambil, bandingin maximumnya
                ret = max(
                    blomdp(pos + 1, rem - w[pos]) + v[pos] , blomdp(pos + 1, rem)
                );
            } else {
                // gabisa diambil, terpaksa maju
                ret = blomdp(pos + 1, rem);
            }
        }
    }
    return ret;
}
