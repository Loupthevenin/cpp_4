/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltheveni <ltheveni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 20:44:11 by ltheveni          #+#    #+#             */
/*   Updated: 2025/02/21 14:00:45 by ltheveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MateriaSource.hpp"
#include <cstddef>

MateriaSource::MateriaSource() {
  int i;

  i = 0;
  while (i < 4) {
    templates[i] = NULL;
    i++;
  }
}

MateriaSource::~MateriaSource() {
  int i;

  i = 0;
  while (i < 4) {
    delete templates[i];
    templates[i] = NULL;
    i++;
  }
}

void MateriaSource::learnMateria(AMateria *m) {
  int i;

  i = 0;
  while (i < 4) {
    if (!templates[i]) {
      templates[i] = m;
      return;
    }
    i++;
  }
}

AMateria *MateriaSource::createMateria(std::string const &type) {
  int i;

  i = 0;
  while (i < 4) {
    if (templates[i] && templates[i]->getType() == type)
      return templates[i]->clone();
    i++;
  }
  return NULL;
}
