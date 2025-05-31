/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volmer <volmer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 18:14:00 by volmer            #+#    #+#             */
/*   Updated: 2025/05/31 19:46:20 by volmer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
	// ------------------ TESTS CLAPTRAP ------------------
	std::cout << BOLD << BG_CYAN << "==================== TESTS CLAPTRAP ====================" << RESET << std::endl;

	std::cout << BOLD << CYAN << "----- TEST 1: Constructores y operador de asignación -----" << RESET << std::endl;
	ClapTrap bot1("JuanBot");
	ClapTrap bot2("CopyBot");
	ClapTrap bot3;
	bot3 = bot1;
	ClapTrap bot4(bot2);

	std::cout << "\n" << BOLD << BLUE << "----- TEST 2: Ataque con daño modificado -----" << RESET << std::endl;
	bot1.setAttackDamage(5);
	bot1.attack("EnemigoFinal");
	std::cout << YELLOW << "JuanBot energy: " << bot1.getEnergyPoints()
	          << ", hit points: " << bot1.getHitPoints()
	          << ", attack damage: " << bot1.getAttackDamage() << RESET << std::endl;

	std::cout << "\n" << BOLD << BLUE << "----- TEST 3: Ataques seguidos hasta agotar energía -----" << RESET << std::endl;
	bot2.setAttackDamage(2);
	for (int i = 0; i < 11; ++i) {
		bot2.attack("DummyTarget");
	}
	std::cout << YELLOW << "CopyBot energy: " << bot2.getEnergyPoints() << RESET << std::endl;

	std::cout << "\n" << BOLD << RED << "----- TEST 4: Daño recibido -----" << RESET << std::endl;
	bot1.takeDamage(3);
	std::cout << YELLOW << "JuanBot hit points after 3 damage: " << bot1.getHitPoints() << RESET << std::endl;
	bot1.takeDamage(20);
	std::cout << YELLOW << "JuanBot hit points after 20 damage: " << bot1.getHitPoints() << RESET << std::endl;

	std::cout << "\n" << BOLD << GREEN << "----- TEST 5: Reparación con energía -----" << RESET << std::endl;
	bot3.beRepaired(5);
	std::cout << YELLOW << "Bot3 hit points: " << bot3.getHitPoints()
	          << ", energy: " << bot3.getEnergyPoints() << RESET << std::endl;

	std::cout << "\n" << BOLD << MAGENTA << "----- TEST 6: Reparación sin energía -----" << RESET << std::endl;
	for (int i = 0; i < 10; ++i) {
		bot3.attack("Agotador");
	}
	bot3.beRepaired(3);
	std::cout << YELLOW << "Bot3 energy after spam: " << bot3.getEnergyPoints() << RESET << std::endl;

	std::cout << "\n" << BOLD << RED << "----- TEST 7: Reparación estando muerto -----" << RESET << std::endl;
	bot1.beRepaired(5);
	std::cout << YELLOW << "JuanBot hit points: " << bot1.getHitPoints()
	          << ", energy: " << bot1.getEnergyPoints() << RESET << std::endl;

	// ------------------ TESTS SCAVTRAP ------------------
	std::cout << "\n" << BOLD << BG_GREEN << "==================== TESTS SCAVTRAP ====================" << RESET << std::endl;

	std::cout << BOLD << GREEN << "----- TEST A: Constructores y destructor -----" << RESET << std::endl;
	ScavTrap guardia1("Serena");
	ScavTrap guardia2;
	ScavTrap guardia3(guardia1);
	ScavTrap guardia4;
	guardia4 = guardia2;

	std::cout << "\n" << BOLD << GREEN << "----- TEST B: Ataque específico de ScavTrap -----" << RESET << std::endl;
	guardia1.attack("Intruso");

	std::cout << "\n" << BOLD << GREEN << "----- TEST C: Activación del modo guardia -----" << RESET << std::endl;
	guardia1.guardGate();

	std::cout << "\n" << BOLD << GREEN << "----- TEST D: Uso de métodos heredados -----" << RESET << std::endl;
	guardia1.takeDamage(30);
	guardia1.beRepaired(20);

		// ------------------ TESTS FRAGTRAP ------------------
	std::cout << "\n" << BOLD << BG_YELLOW << "==================== TESTS FRAGTRAP ====================" << RESET << std::endl;
	
	std::cout << BOLD << YELLOW << "----- TEST 1: Constructores y operador de asignación -----" << RESET << std::endl;
	FragTrap frag1("Fiver");
	FragTrap frag2;
	FragTrap frag3(frag1);
	FragTrap frag4;
	frag4 = frag2;
	
	std::cout << "\n" << BOLD << YELLOW << "----- TEST 2: Ataque con mensaje personalizado -----" << RESET << std::endl;
	frag1.attack("EnemigoGigante");
	
	std::cout << "\n" << BOLD << YELLOW << "----- TEST 3: Habilidad especial: high fives -----" << RESET << std::endl;
	frag1.highFivesGuys();
	
	std::cout << "\n" << BOLD << YELLOW << "----- TEST 4: Métodos heredados: daño y curación -----" << RESET << std::endl;
	frag1.takeDamage(40);
	frag1.beRepaired(25);
	
	std::cout << "\n" << BOLD << BG_MAGENTA << "==================== FIN DE PRUEBAS ====================" << RESET << std::endl;

	return 0;
}
