/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvoicu <fvoicu@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 18:42:48 by fvoicu            #+#    #+#             */
/*   Updated: 2024/04/24 19:35:13 by fvoicu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string& newName) : _name(newName), \
           _hitpoints(10), _energyPoints(10), _attackDamage(0){
    std::cout << "ClapTrap constructor called" << std::endl;
} 

ClapTrap::~ClapTrap() {
    std::cout << "\n";
    std::cout << "ClapTrap destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
  std::cout << "\n";
  if (_energyPoints > 0) {
    std::cout << "ClapTrap " << _name << \
    " attacks " << target << ", causing " \
    << _attackDamage << " points of damage!" << std::endl;
    _energyPoints -= 1;
  } else {
    std::cout << "ClapTrap " << _name << \
    " is too tired to attack!" << std::endl;
    std::cout << "ClapTrap " << _name << \
    " will go take a nap." << std::endl;
  }
}

void ClapTrap::takeDamage(unsigned int amount) {
  std::cout << "\n";
  std::cout << "ClapTrap " << _name << \
 " takes " << amount << " damage points!"<< std::endl;
  _hitpoints -= amount;
  if (_hitpoints < 0) {
    _hitpoints = 0;
    std::cout << "ClapTrap " << _name << \
    " is already dead." << std::endl;
    std::cout << "Why are you stil hitting" << \
    " ClapTrap " << _name << "?" << std::endl;
  }
}

void ClapTrap::beRepaired(unsigned int amount) {
  std::cout << "\n";
  if ( _energyPoints > 0) {
  std::cout << "So you tought you can defeat" \
  << " ClapTrap " << _name << "?" << std::endl;
  std::cout << "Think again!" << std::endl;
  std::cout << "ClapTrap " << _name << \
  " repairs itself for " << amount << " points!" \
  << std::endl;
  _hitpoints += 1;
  } else {
    std::cout << "ClapTrap " << _name << \
    " is really dead this time." << std::endl;
  }
}
