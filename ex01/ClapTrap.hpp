/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvoicu <fvoicu@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 18:38:11 by fvoicu            #+#    #+#             */
/*   Updated: 2024/04/27 00:12:29 by fvoicu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
#include <iostream>

/***COLORS***/
# define RESET "\033[0m"

/**Robots**/
/*ClapTrap*/
# define CYAN "\033[1;36m"
/*ScavTrap*/
# define PURPLE "\033[1;38;2;150;111;214m"

/**Actions**/
/*Attack*/
# define RED "\033[1;31m"
# define ATTACKS RED " attacks " RESET
/*Take Damage*/
# define BLUE "\033[1;34m"
# define TAKES BLUE " takes " RESET
/*Repair*/
# define GREEN "\033[1;32m"
# define REPAIRS GREEN " repairs itself " RESET



class ClapTrap {

 protected:
  std::string _name;
  int _hitpoints;
  int _energyPoints;
  int _attackDamage;

 public:
  ClapTrap();
  ClapTrap(const std::string& newName);
  ClapTrap(const ClapTrap& other);
  ClapTrap& operator=(const ClapTrap& other);
  virtual ~ClapTrap();
  int getEnergyPoints() const;
  virtual void attack(const std::string& target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);
};

#endif
