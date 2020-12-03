/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author F.de Sande
 * @date 30 Jun 2020
 * @brief Move constructor
 *
 * @see http://www.cplusplus.com/doc/tutorial/classes2/#move
 * @see http://www.cplusplus.com/doc/tutorial/classes/
 * @see http://www.cplusplus.com/doc/tutorial/classes2/
 * @see https://en.cppreference.com/w/cpp/language/move_constructor
 */

#include <iostream>

using namespace std;

class Vector {          // Two-dimensional vector class
  public:
    Vector() {          // Default constructor
      x_ = 0.0;
      y_ = 0.0;
      cout << "Class constructor has been called" << endl;
    }

    Vector(const Vector& v) { // Copy constructor
      x_ = v.x_; 
      y_ = v.y_;
      cout << "Copy constructor has been called" << endl;
    }

    Vector(Vector&& v) {     // Move constructor
      x_ = v.x_; 
      y_ = v.y_;
      cout << "Move constructor has been called" << endl;
    }

  // ...

  private:
    double x_ ;         // The x component of the vector
    double y_ ;         // The y component of the vector
};

Vector Func() {          // Func returns a Vector object
  cout << "Previous to local_vec declaration" << endl;
  Vector local_vec;
  cout << "After local_vec declaration" << endl;
  return local_vec;
}

int main() {
  cout << "Previous to Func call" << endl;
  Vector my_vec = Func();   // calls Vector(Vector&&) if move not elided
  cout << "After Func call" << endl;
  return 0;
}

