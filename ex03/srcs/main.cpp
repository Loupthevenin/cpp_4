/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltheveni <ltheveni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 20:54:45 by ltheveni          #+#    #+#             */
/*   Updated: 2025/02/21 14:45:57 by ltheveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Character.hpp"
#include "../includes/Cure.hpp"
#include "../includes/ICharacter.hpp"
#include "../includes/IMateriaSource.hpp"
#include "../includes/Ice.hpp"
#include "../includes/MateriaSource.hpp"
#include <iostream>

void main_test(void) {
  IMateriaSource *src = new MateriaSource();
  src->learnMateria(new Ice());
  src->learnMateria(new Cure());
  ICharacter *me = new Character("me");
  AMateria *tmp;
  tmp = src->createMateria("ice");
  me->equip(tmp);
  tmp = src->createMateria("cure");
  me->equip(tmp);
  ICharacter *bob = new Character("bob");
  me->use(0, *bob);
  me->use(1, *bob);
  delete bob;
  delete me;
  delete src;
}

void test_materia_source(void) {
  IMateriaSource *src = new MateriaSource();

  AMateria *ice = new Ice();
  AMateria *cure = new Cure();

  src->learnMateria(ice);
  src->learnMateria(cure);

  AMateria *createdIce = src->createMateria("ice");
  AMateria *createdCure = src->createMateria("cure");
  if (createdIce)
    std::cout << "Materia Ice created" << std::endl;
  if (createdCure)
    std::cout << "Materia Cure created" << std::endl;

  AMateria *another = src->createMateria("fire");
  if (!another)
    std::cout << "Echec materia inconnu" << std::endl;

  delete createdIce;
  delete createdCure;
  delete src;
}

void test_character() {
  Character *hero = new Character("Hero");
  IMateriaSource *src = new MateriaSource();

  src->learnMateria(new Ice());
  src->learnMateria(new Cure());

  AMateria *m1 = src->createMateria("ice");
  AMateria *m2 = src->createMateria("cure");
  AMateria *m3 = src->createMateria("ice");
  AMateria *m4 = src->createMateria("cure");

  hero->equip(m1);
  hero->equip(m2);
  hero->equip(m3);
  hero->equip(m4);

  std::cout << "Hero 4 materia" << std::endl;

  AMateria *extra = src->createMateria("ice");
  hero->equip(extra);

  delete extra;
  delete src;
  delete hero;
}

void test_materia_usage(void) {
  IMateriaSource *src = new MateriaSource();
  src->learnMateria(new Ice());
  src->learnMateria(new Cure());

  Character *hero = new Character("Hero");
  Character *enemy = new Character("Enemy");

  AMateria *m1 = src->createMateria("ice");
  AMateria *m2 = src->createMateria("cure");

  hero->equip(m1);
  hero->equip(m2);

  hero->use(0, *enemy);
  hero->use(1, *enemy);

  hero->use(2, *enemy);

  delete src;
  delete hero;
  delete enemy;
}

void test_materia_unequip(void) {
  IMateriaSource *src = new MateriaSource();
  src->learnMateria(new Ice());

  Character *hero = new Character("Hero");

  AMateria *m1 = src->createMateria("ice");
  hero->equip(m1);

  std::cout << "Materia Ice equip" << std::endl;

  hero->unequip(0);
  std::cout << "Materia unequip" << std::endl;

  delete src;
  delete hero;
  delete m1;
}

void test_deep_copy(void) {
  Character *original = new Character("Original");
  AMateria *ice = new Ice();
  original->equip(ice);

  Character *copy = new Character(*original);
  std::cout << "Copy Character" << std::endl;

  copy->use(0, *original);

  delete original;
  delete copy;
}

int main() {
  std::cout << "=======[TEST]: PDF=======" << std::endl;
  main_test();
  std::cout << "=======[TEST]: PDF=======" << std::endl;
  std::cout << "=======[TEST]: MATERIA SOURCE=======" << std::endl;
  test_materia_source();
  std::cout << "=======[TEST]: MATERIA SOURCE=======" << std::endl;
  std::cout << "=======[TEST]: CHARACTER=======" << std::endl;
  test_character();
  std::cout << "=======[TEST]: CHARACTER=======" << std::endl;
  std::cout << "=======[TEST]: MATERIA USAGE=======" << std::endl;
  test_materia_usage();
  std::cout << "=======[TEST]: MATERIA USAGE=======" << std::endl;
  std::cout << "=======[TEST]: MATERIA UNEQUIP=======" << std::endl;
  test_materia_unequip();
  std::cout << "=======[TEST]: MATERIA UNEQUIP=======" << std::endl;
  std::cout << "=======[TEST]: DEEP COPY=======" << std::endl;
  test_deep_copy();
  std::cout << "=======[TEST]: DEEP COPY=======" << std::endl;
  return 0;
}
