/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volmer <volmer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 18:14:00 by volmer            #+#    #+#             */
/*   Updated: 2025/05/30 18:30:40 by volmer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
	std::cout << "----- TEST 1: Constructores y operador de asignación -----" << std::endl;
	ClapTrap bot1("JuanBot");
	ClapTrap bot2("CopyBot");
	ClapTrap bot3;

	bot3 = bot1; // operador de asignación
	ClapTrap bot4(bot2); // constructor de copia

	std::cout << "\n----- TEST 2: Ataque con daño modificado -----" << std::endl;
	bot1.setAttackDamage(5);
	bot1.attack("EnemigoFinal");
	std::cout << "JuanBot energy: " << bot1.getEnergyPoints()
	          << ", hit points: " << bot1.getHitPoints()
	          << ", attack damage: " << bot1.getAttackDamage() << std::endl;

	std::cout << "\n----- TEST 3: Ataques seguidos hasta agotar energía -----" << std::endl;
	bot2.setAttackDamage(2);
	for (int i = 0; i < 11; ++i) {
		bot2.attack("DummyTarget");
	}
	std::cout << "CopyBot energy: " << bot2.getEnergyPoints() << std::endl;

	std::cout << "\n----- TEST 4: Daño recibido -----" << std::endl;
	bot1.takeDamage(3);
	std::cout << "JuanBot hit points after 3 damage: " << bot1.getHitPoints() << std::endl;
	bot1.takeDamage(20); // daño letal
	std::cout << "JuanBot hit points after 20 damage: " << bot1.getHitPoints() << std::endl;

	std::cout << "\n----- TEST 5: Reparación con energía -----" << std::endl;
	bot3.beRepaired(5);
	std::cout << "Bot3 hit points: " << bot3.getHitPoints()
	          << ", energy: " << bot3.getEnergyPoints() << std::endl;

	std::cout << "\n----- TEST 6: Reparación sin energía -----" << std::endl;
	for (int i = 0; i < 10; ++i) {
		bot3.attack("Agotador");
	}
	bot3.beRepaired(3); // no debería poder
	std::cout << "Bot3 energy after spam: " << bot3.getEnergyPoints() << std::endl;

	std::cout << "\n----- TEST 7: Reparación estando muerto -----" << std::endl;
	bot1.beRepaired(5); // no debería curarse
	std::cout << "JuanBot hit points: " << bot1.getHitPoints()
	          << ", energy: " << bot1.getEnergyPoints() << std::endl;

	std::cout << "\n----- FIN DE PRUEBAS -----" << std::endl;
	return 0;
}
