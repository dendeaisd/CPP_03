/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvoicu <fvoicu@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 18:51:28 by fvoicu            #+#    #+#             */
/*   Updated: 2024/04/28 19:33:47 by fvoicu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Default"), \
                            ScavTrap(), FragTrap() {

  _hitpoints = FragTrap::_hitpoints;
  _energyPoints = ScavTrap::_energyPoints;
  _attackDamage = FragTrap::_attackDamage;

  std::cout << TURQUISE << "DiamondTrap default constructor called\n" 
            << RESET << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& _name) : \
              ClapTrap(_name + "_clap_name"), \
              ScavTrap(_name), FragTrap(_name), _name(_name) {

  _hitpoints = FragTrap::_hitpoints;
  _energyPoints = ScavTrap::_energyPoints;
  _attackDamage = FragTrap::_attackDamage;

  std::cout << TURQUISE << "DiamondTrap constructor for " << _name 
            << " called\n" << RESET << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : \
              ClapTrap(other), ScavTrap(other), FragTrap(other) {
  _name = other._name;
  _hitpoints = other._hitpoints;
  _energyPoints = other._energyPoints;
  _attackDamage = other._attackDamage;
  std::cout << TURQUISE << "DiamondTrap copy constructor called\n" 
            << RESET << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other) {

  std::cout << TURQUISE << "DiamondTrap assignation operator called\n" 
            << RESET << std::endl;

  if (this != &other) {
    ClapTrap::operator=(other);
    _name = other._name;
  }
  return *this;
}

DiamondTrap::~DiamondTrap() {
  std::cout << TURQUISE << "DiamondTrap destructor for " << _name 
            << " called" << RESET << std::endl;
}


void DiamondTrap::attack(const std::string& target) {
  std::cout << "\n";
  ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
  std::cout << "\n";
  std::cout << TURQUISE << "\nDiamondTrap name: " << _name \
            << CYAN << "\nClapTrap name: " << \
            ClapTrap::_name << RESET << std::endl;
}
