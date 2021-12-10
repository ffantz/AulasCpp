#include <vector>

class Point2d {
    private:
        int id;
        double x;
        double y;
        void getNextId();

    public:
        static std::vector<int> ids;
        // Construtores
        Point2d();
        Point2d(double x, double y);

        // destrutor
        ~Point2d();

        // basic getters
        double getX() const;
        double getY() const;
        double getId() const;

        void setX(double valor);
        void setY(double valor);

        // other methods
        void imprimeIds();
        double distToOrig();
        double distTo(Point2d p2);
        // void sumOf(Point2d p2);
        // void sumOf(Point2d p1, Point2d p2);
        Point2d sumOf(Point2d p2);
        void print() const;
};