/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltheveni <ltheveni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 20:12:09 by ltheveni          #+#    #+#             */
/*   Updated: 2025/02/21 13:55:29 by ltheveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Character.hpp"
#include <cstddef>

Character::Character(std::string const &name) : name(name) {
  int i;

  i = 0;
  while (i < 4) {
    materias[i] = NULL;
    i++;
  }
}

Character::Character(const Character &other) : name(other.name) {
  int i;

  i = 0;
  while (i < 4) {
    materias[i] = other.materias[i] ? other.materias[i]->clone() : NULL;
    i++;
  }
}

Character &Character::operator=(const Character &other) {
  int i;
  if (this != &other) {
    name = other.name;
    i = 0;
    while (i < 4) {
      delete materias[i];
      materias[i] = other.materias[i] ? other.materias[i]->clone() : NULL;
      i++;
    }
  }
  return *this;
}

Character::~Character() {
  int i;

  i = 0;
  while (i < 4) {
    delete materias[i];
    materias[i] = NULL;
    i++;
  }
}

std::string const &Character::getName() const { return name; }

void Character::equip(AMateria *m) {
  int i;

  i = 0;
  while (i < 4) {
    if (!materias[i]) {
      materias[i] = m;
      return;
    }
    i++;
  }
}

void Character::unequip(int idx) {
  if (idx >= 0 && idx < 4)
    materias[idx] = NULL;
}

void Character::use(int idx, ICharacter &target) {
  if (idx >= 0 && idx < 4 && materias[idx])
    materias[idx]->use(target);
}
