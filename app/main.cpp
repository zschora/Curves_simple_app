#include <iostream>
#include <cmath>
#include "Vector3D.h"
#include "Circle.h"
#include "Ellipse.h"
#include "Helix.h"
#include "Curve.h"
#include <vector>
#include <random>
#include <iomanip>
#include <algorithm>
#include <memory>

int main() {
    std::random_device rd;
    std::mt19937 rg(rd());
    std::cout << std::setprecision(3);

    std::vector<std::shared_ptr<Curve>> curves(15);
    for(auto & curve: curves){
        // генерируем слусчайно тип фигуры и параметры
        int type = std::uniform_int_distribution<int>(0, 2)(rg);
        double param1 = std::uniform_real_distribution<double>(0.1, 100)(rg);
        double param2 = std::uniform_real_distribution<double>(0.1, 100)(rg);
        switch (type) {
            case 0:
                curve = std::make_shared<Circle>(param1);
                break;
            case 1:
                curve = std::make_shared<Ellipse>(param1, param2);
                break;
            case 2:
                curve = std::make_shared<Helix>(param1, param2);
        }
    }

    for(auto & curve: curves){
        std::cout << "Point, derivative:\n\t";
        std::cout << curve->getPoint(M_PI / 4) << ", ";
        std::cout << curve->getDerivative(M_PI / 4) << '\n';
    }

    // оставим только круги
    std::vector<std::shared_ptr<Circle>> circles;
    for(auto& curve: curves){
        if (auto circle = std::dynamic_pointer_cast<Circle>(curve))
            circles.push_back(circle);
    }

    //отсортируем и выведем радиусы
    std::sort(circles.begin(), circles.end(),
              [](const std::shared_ptr<Circle>& c1,const std::shared_ptr<Circle>& c2){
        return c1->getRadius() < c2->getRadius();
    });
    for(auto& c: circles) { std::cout << c->getRadius() << ' '; }

    double total_radius_sum = 0;
    for(auto& c: circles) { total_radius_sum += c->getRadius(); }
    std::cout << "\nTotal radius sum: " << total_radius_sum;

    return 0;
}
