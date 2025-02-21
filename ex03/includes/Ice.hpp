/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltheveni <ltheveni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 19:39:18 by ltheveni          #+#    #+#             */
/*   Updated: 2025/02/18 19:53:45 by ltheveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"

class Ice : public AMateria {
public:
  Ice();
  Ice(const Ice &other);
  Ice &operator=(const Ice &other);
  virtual ~Ice();

  virtual AMateria *clone() const;
  virtual void use(ICharacter &target);
};
