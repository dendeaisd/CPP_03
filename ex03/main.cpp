/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvoicu <fvoicu@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 18:49:26 by fvoicu            #+#    #+#             */
/*   Updated: 2024/04/27 00:37:32 by fvoicu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

int main() {
  FragTrap frag("Fraggy");

  frag.attack("Target Dummy");
  frag.takeDamage(20);
  frag.beRepaired(30);
  frag.highFivesGuys();

  return 0;
}