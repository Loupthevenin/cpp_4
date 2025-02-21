/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltheveni <ltheveni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 19:17:49 by ltheveni          #+#    #+#             */
/*   Updated: 2025/02/18 21:07:41 by ltheveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"
#include <cstddef>

AMateria::AMateria(std::string const &type) : type(type) {}

AMateria::AMateria(const AMateria &other) : type(other.type) {}

AMateria &AMateria::operator=(const AMateria &other) {
  if (this != &other) {
    type = other.type;
  }
  return *this;
}

AMateria::~AMateria() {}

std::string const &AMateria::getType() const { return type; }

AMateria *AMateria::clone() const { return NULL; }

void AMateria::use(ICharacter &target) { (void)target; }
