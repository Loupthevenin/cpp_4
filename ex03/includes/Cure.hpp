/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltheveni <ltheveni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 19:39:45 by ltheveni          #+#    #+#             */
/*   Updated: 2025/02/18 19:53:59 by ltheveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Cure : public AMateria {
public:
  Cure();
  Cure(const Cure &other);
  Cure &operator=(const Cure &other);
  ~Cure();

  virtual AMateria *clone() const;
  virtual void use(ICharacter &target);
};
