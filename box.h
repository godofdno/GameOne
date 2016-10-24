#ifndef BOX
#define BOX
#include <QPair>

class Box
{
public:
    enum Color {RED=1, GREEN, BLUE, YELLOW, LAST, WHITE=-1};
    Box();
    Box(Color aColor, QPair <int,int> aCoordinate);
    ~Box();

    QPair <int, int> GetCoordinate();
    void SetCoordinate(QPair <int,int> aCoordinate);

    void SetColor(Color aColor);
    Color GetColor();

    void SetMoveStatus(bool aCanMove);
    bool GetMoveStatus();


private:
    bool mIsCanMove;
    QPair <int, int> mCoordinate;
    Color mColor;
};

#endif // BOX

