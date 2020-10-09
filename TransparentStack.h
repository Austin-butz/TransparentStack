#include <stack>
#include <vector>
#include <iostream>

using namespace std;

template <typename T>
class TransparentStack: public stack<T, vector<T>> {
    public:
    const int peek_at(size_t idx) {
        TransparentStack temp = *this;
        T tempitem;
        for (size_t i = this->size()-1; i >= idx; i--) {
            tempitem = temp.top();
            if (i == idx) break;
            else temp.pop();
        }
        return tempitem;
    }
};