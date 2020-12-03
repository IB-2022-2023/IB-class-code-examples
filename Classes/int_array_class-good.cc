/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author F. de Sande
 * @date 25 Jun 2020
 * @brief Benefit: Encapsulated classes help protect your data and prevent misuse


 *
 * @see https://www.learncpp.com/cpp-tutorial/84-access-functions-and-encapsulation/
 */

#include <iostream>

class IntArray {
 private:
	static const int kSize = 10;
  int store_[kSize]; // user can not access this directly any more

 public:
  void setValue(int index, int value) {
    // If the index is invalid, do nothing
    if (index < 0 || index >= kSize) {
			std::cerr << "An error message..." << std::endl;
      return;
		}
    store_[index] = value;
  }
};

int main() {
  IntArray my_array;
  // array.store_[16] = 2; // This generates a compiler error
	my_array.setValue(16, 2);
}
