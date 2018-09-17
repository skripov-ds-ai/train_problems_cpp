//
// Created by nizhikebinesi on 18.09.18.
//

// another way can built on knowledge that fields in structure are placed sequential
struct Cls {
    Cls(char c, double d, int i);
private:
    char c;
    double d;
    int i;
};

struct Cls_ {
    Cls_(char c, double d, int i);
public:
    char c;
    double d;
    int i;
};

Cls_ * get_element(Cls &cls) {
    void * vd_ptr = static_cast<void *>(&cls);
    Cls_ * ptr  = static_cast<Cls_ *>(vd_ptr);
    return ptr;
}

// Эта функция должна предоставить доступ к полю c объекта cls.
// Обратите внимание, что возвращается ссылка на char, т. е.
// доступ предоставляется на чтение и запись.
char &get_c(Cls &cls) {
    return get_element(cls)->c;
}

// Эта функция должна предоставить доступ к полю d объекта cls.
// Обратите внимание, что возвращается ссылка на double, т. е.
// доступ предоставляется на чтение и запись.
double &get_d(Cls &cls) {
    return get_element(cls)->d;
}

// Эта функция должна предоставить доступ к полю i объекта cls.
// Обратите внимание, что возвращается ссылка на int, т. е.
// доступ предоставляется на чтение и запись.
int &get_i(Cls &cls) {
    return get_element(cls)->i;
}

