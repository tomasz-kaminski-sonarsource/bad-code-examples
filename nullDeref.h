int nullDeref(int x) {
    int* p = nullptr;
    if (x < 10) {
        p = new int(1);
    }
    if (x > 10) {
        return *p;
    }
    return 1;
}
