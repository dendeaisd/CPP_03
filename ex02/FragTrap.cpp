/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvoicu <fvoicu@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 00:27:39 by fvoicu            #+#    #+#             */
/*   Updated: 2024/04/27 00:40:33 by fvoicu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Default") {
  _hitpoints = 100;
  _energyPoints = 100;
  _attackDamage = 30;
  std::cout << D_GREEN "FragTrap default constructor called." 
            << RESET << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
  std::cout << D_GREEN "FragTrap copy constructor called." 
            << RESET << std::endl;
  
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
  std::cout << D_GREEN "FragTrap assignation operator called." 
            << RESET << std::endl;
  if (this != &other) {
    _name = other._name;
    _hitpoints = other._hitpoints;
    _energyPoints = other._energyPoints;
    _attackDamage = other._attackDamage;
  }
  return *this;
}

FragTrap::FragTrap(const std::string& newName) : ClapTrap(newName) {
  _hitpoints = 100;
  _energyPoints = 100;
  _attackDamage = 30;
  std::cout << D_GREEN "FragTrap constructor for " << _name 
            << " called." << RESET << std::endl;
}

FragTrap::~FragTrap() {
  std::cout << D_GREEN "FragTrap destructor for " << _name 
            << " called." << RESET << std::endl;
}

void FragTrap::attack(const std::string& target) {
  std::cout << "\n";
  if (_energyPoints > 0) {
    std::cout << D_GREEN "FragTrap " << _name << ATTACKS 
              << target << ", causing " << _attackDamage 
              << " points of damage!" << std::endl;
  }
}

void FragTrap::highFivesGuys(void) {
  std::cout << D_GREEN "FragTrap " << _name << RESET \
            << " requests a high five!🙏" << std::endl;
}