#pragma once
//this file is meant to make updating the editor for stat changes exceedingly simple.
//stats use pes21 names
//stats that are listed as 0 will be replaced with the base_stat value in the editor.
//note that currently the AATF currently checks heights, and then curl/swerve stat of golds/silvers to assign player types.
//if the height of nm (including gks) and buffed players are the same, changes need to be made to the aatf
//if the height AND curl/swerve of golds and silvers are the same, changes need to be made to the aatf

//due to changes in rules, players that use the taller nm height bracket may be called "buffed" in comments or variable names

namespace gold { //gold stats
	const int count = 2; //number of this type of player allowed
	const int form = 8;
	const int injury_resistance = 1;
	const int weak_foot_usage = 4;
	const int weak_foot_accuracy = 4;
	const int height = 194;
	const int skills = 6; //max number of non free skills allowed
	const int free_coms = 2; //free coms allowed
	const int free_a = 2; //free a positions allowed, note this includes the A position that a registered position gives

	const int base_stat = 99; //base stat value used if no changes. if a stat below is set at 0, this value will be used.
	const int offensive_awareness = 0;
	const int ball_control = 0;
	const int dribbling = 0;
	const int low_pass = 0;
	const int lofted_pass = 0;
	const int finishing = 0;
	const int place_kicking = 96;
	const int curl = 0;
	const int header = 0;
	const int defensive_awareness = 58;
	const int ball_winning = 0;
	const int kicking_power = 0;
	const int speed = 0;
	const int acceleration = 0;
	const int balance = 0;
	const int physical_contact = 0;
	const int jump = 0;
	const int stamina = 0;
	const int gk_awareness = 0;
	const int catching = 0;
	const int clearing = 0;
	const int reflexes = 0;
	const int gk_reach = 0;
	const int tight_possession = 0;
	const int aggression = 0;
	const int stat_array[] = { offensive_awareness, ball_control, dribbling, low_pass, lofted_pass, finishing, place_kicking, curl, header, defensive_awareness, 
		ball_winning, kicking_power, speed, acceleration, balance, physical_contact, jump, stamina, gk_awareness, catching, clearing, reflexes, gk_reach, 
		tight_possession, aggression};

}
namespace silver { //silver stats
	const int count = 3; //number of this type of player allowed
	const int form = 8;
	const int injury_resistance = 1;
	const int weak_foot_usage = 4;
	const int weak_foot_accuracy = 4;
	const int height = 194;
	const int skills = 7; //max number of non free skills allowed
	const int free_coms = 2; //free coms allowed
	const int free_a = 3; //free a positions allowed, note this includes the A position that a registered position gives

	const int base_stat = 92; //base stat value used if no changes. if a stat below is set at 0, this value will be used.
	const int offensive_awareness = 95;
	const int ball_control = 0;
	const int dribbling = 0;
	const int low_pass = 0;
	const int lofted_pass = 0;
	const int finishing = 0;
	const int place_kicking = 88;
	const int curl = 0; 
	const int header = 0;
	const int defensive_awareness = 56;
	const int ball_winning = 88;
	const int kicking_power = 0;
	const int speed = 0;
	const int acceleration = 0;
	const int balance = 0;
	const int physical_contact = 0;
	const int jump = 0;
	const int stamina = 95;
	const int gk_awareness = 0;
	const int catching = 0;
	const int clearing = 0;
	const int reflexes = 0;
	const int gk_reach = 0;
	const int tight_possession = 0;
	const int aggression = 88;
	const int stat_array[] = { offensive_awareness, ball_control, dribbling, low_pass, lofted_pass, finishing, place_kicking, curl, header, defensive_awareness,
		ball_winning, kicking_power, speed, acceleration, balance, physical_contact, jump, stamina, gk_awareness, catching, clearing, reflexes, gk_reach,
		tight_possession, aggression };
}
namespace nm { //nm (nonbuffed) stats
	const int count = 10; //number of this type of player allowed
	const int form = 4;
	const int gk_form = 8;
	const int injury_resistance = 1;
	const int weak_foot_usage = 4;
	const int weak_foot_accuracy = 4;
	const int height = 178;
	const int gk_height = 180;
	const int skills = 7; //max number of non free skills allowed
	const int free_coms = 1; //free coms allowed
	const int free_a = 2; //free a positions allowed, note this includes the A position that a registered position gives

	const int base_stat = 77; //base stat value used if no changes. if a stat below is set at 0, this value will be used.
	const int offensive_awareness = 87;
	const int ball_control = 87;
	const int dribbling = 87;
	const int low_pass = 87;
	const int lofted_pass = 92;
	const int finishing = 97;
	const int place_kicking = 70;
	const int curl = 87; 
	const int header = 0;
	const int defensive_awareness = 73;
	const int ball_winning = 68;
	const int kicking_power = 87;
	const int speed = 0;
	const int acceleration = 73;
	const int balance = 0;
	const int physical_contact = 68;
	const int jump = 67;
	const int stamina = 55;
	const int gk_awareness = 75;
	const int catching = 70;
	const int clearing = 0;
	const int reflexes = 73;
	const int gk_reach = 73;
	const int tight_possession = 87;
	const int aggression = 92;
	const int stat_array[] = { offensive_awareness, ball_control, dribbling, low_pass, lofted_pass, finishing, place_kicking, curl, header, defensive_awareness,
		ball_winning, kicking_power, speed, acceleration, balance, physical_contact, jump, stamina, gk_awareness, catching, clearing, reflexes, gk_reach,
		tight_possession, aggression };
}

namespace buffed { //buffed player stats
	const int count = 8; //number of this type of player allowed
	const int form = 4;
	const int injury_resistance = 1;
	const int weak_foot_usage = 4;
	const int weak_foot_accuracy = 4;
	const int weak_foot_usage_debuff = 2;
	const int weak_foot_accuracy_debuff = 2;
	const int height = 188;
	const int skills = 7; //max number of non free skills allowed
	const int free_coms = 1; //free coms allowed
	const int free_a = 1; //free a positions allowed, note this includes the A position that a registered position gives

	const int base_stat = 77; //base stat value used if no changes. if a stat below is set at 0, this value will be used.
	const int offensive_awareness = 92;
	const int ball_control = 87;
	const int dribbling = 92;
	const int low_pass = 87;
	const int lofted_pass = 87;
	const int finishing = 92;
	const int place_kicking = 70;
	const int curl = 87;
	const int header = 0;
	const int defensive_awareness = 53;
	const int ball_winning = 68;
	const int kicking_power = 92;
	const int speed = 88;
	const int acceleration = 88;
	const int balance = 88;
	const int physical_contact = 88;
	const int jump = 0;
	const int stamina = 60;
	const int gk_awareness = 75;
	const int catching = 70;
	const int clearing = 0;
	const int reflexes = 73;
	const int gk_reach = 73;
	const int tight_possession = 87;
	const int aggression = 87;
	const int stat_array[] = { offensive_awareness, ball_control, dribbling, low_pass, lofted_pass, finishing, place_kicking, curl, header, defensive_awareness,
		ball_winning, kicking_power, speed, acceleration, balance, physical_contact, jump, stamina, gk_awareness, catching, clearing, reflexes, gk_reach,
		tight_possession, aggression };
}
/* 
namespace blank_example { //has all stats 0'd out for easier removal of stat changes
	const int count = 0; //number of this type of player allowed
	const int form = 0;
	const int injury_resistance = 0;
	const int weak_foot_usage = 0;
	const int weak_foot_accuracy = 0;
	const int height = 0;
	const int skills = 0; //max number of non free skills allowed
	const int free_coms = 0; //free coms allowed
	const int free_a = 0; //free a positions allowed, note this includes the A position that a registered position gives

	const int base_stat = 0; //base stat value used if no changes. if a stat below is set at 0, this value will be used.
	const int offensive_awareness = 0;
	const int ball_control = 0;
	const int dribbling = 0;
	const int low_pass = 0;
	const int lofted_pass = 0;
	const int finishing = 0;
	const int place_kicking = 0;
	const int curl = 0;
	const int header = 0;
	const int defensive_awareness = 0;
	const int ball_winning = 0;
	const int kicking_power = 0;
	const int speed = 0;
	const int acceleration = 0;
	const int balance = 0;
	const int physical_contact = 0;
	const int jump = 0;
	const int stamina = 0;
	const int gk_awareness = 0;
	const int catching = 0;
	const int clearing = 0;
	const int reflexes = 0;
	const int gk_reach = 0;
	const int tight_possession = 0;
	const int aggression = 0;
	const int stat_array[] = { offensive_awareness, ball_control, dribbling, low_pass, lofted_pass, finishing, place_kicking, curl, header, defensive_awareness,
		ball_winning, kicking_power, speed, acceleration, balance, physical_contact, jump, stamina, gk_awareness, catching, clearing, reflexes, gk_reach,
		tight_possession, aggression };
}
*/