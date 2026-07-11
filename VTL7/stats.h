#pragma once
//this file is meant to make updating the editor for stat changes exceedingly simple.
//stats use pes21 names
//
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
	const int height = 195;
	const int skills = 7; //max number of non free skills allowed
	const int free_coms = 2; //free coms allowed
	const int free_a = 2; //free a positions allowed, note this includes the A position that a registered position gives

	const int base_stat = 99; //base stat value used if no changes. if a stat below is set at 0, this value will be used.
	//these are stat bonuses, they are added to the base stat value to arrive at the final stat value
	const int offensive_awareness_bonus = 0;
	const int ball_control_bonus = 0;
	const int dribbling_bonus = 0;
	const int low_pass_bonus = 0;
	const int lofted_pass_bonus = 0;
	const int finishing_bonus = 0;
	const int place_kicking_bonus = -5;
	const int curl_bonus = 0;
	const int header_bonus = 0;
	const int defensive_awareness_bonus = -34;
	const int ball_winning_bonus = -5;
	const int kicking_power_bonus = 0;
	const int speed_bonus = -5;
	const int acceleration_bonus = 0;
	const int balance_bonus = 0;
	const int physical_contact_bonus = -5;
	const int jump_bonus = 0;
	const int stamina_bonus = -5;
	const int gk_awareness_bonus = 0;
	const int catching_bonus = 0;
	const int clearing_bonus = 0;
	const int reflexes_bonus = 0;
	const int gk_reach_bonus = 0;
	const int tight_possession_bonus = 0;
	const int aggression_bonus = 0;
	const int stat_array_bonus[] = { offensive_awareness_bonus, ball_control_bonus, dribbling_bonus, low_pass_bonus, lofted_pass_bonus, finishing_bonus, 
		place_kicking_bonus, curl_bonus, header_bonus, defensive_awareness_bonus, ball_winning_bonus, kicking_power_bonus, speed_bonus, 
		acceleration_bonus, balance_bonus, physical_contact_bonus, jump_bonus, stamina_bonus, gk_awareness_bonus, catching_bonus, clearing_bonus, 
		reflexes_bonus, gk_reach_bonus, tight_possession_bonus, aggression_bonus };

}
namespace silver { //silver stats
	const int count = 3; //number of this type of player allowed
	const int form = 8;
	const int injury_resistance = 1;
	const int weak_foot_usage = 4;
	const int weak_foot_accuracy = 4;
	const int height = 195;
	const int skills = 7; //max number of non free skills allowed
	const int free_coms = 1; //free coms allowed
	const int free_a = 3; //free a positions allowed, note this includes the A position that a registered position gives

	const int base_stat = 89; //base stat value used if no changes. if a stat below is set at 0, this value will be used.
	//these are stat bonuses, they are added to the base stat value to arrive at the final stat value
	const int offensive_awareness_bonus = 5;
	const int ball_control_bonus = 0;
	const int dribbling_bonus = 0;
	const int low_pass_bonus = 0;
	const int lofted_pass_bonus = 0;
	const int finishing_bonus = 0;
	const int place_kicking_bonus = 0;
	const int curl_bonus = 0;
	const int header_bonus = 5;
	const int defensive_awareness_bonus = -32;
	const int ball_winning_bonus = 0;
	const int kicking_power_bonus = 0;
	const int speed_bonus = 0;
	const int acceleration_bonus = 0;
	const int balance_bonus = 0;
	const int physical_contact_bonus = 0;
	const int jump_bonus = 0;
	const int stamina_bonus = 0;
	const int gk_awareness_bonus = 0;
	const int catching_bonus = 0;
	const int clearing_bonus = 0;
	const int reflexes_bonus = 0;
	const int gk_reach_bonus = 0;
	const int tight_possession_bonus = 5;
	const int aggression_bonus = 5;
	const int stat_array_bonus[] = { offensive_awareness_bonus, ball_control_bonus, dribbling_bonus, low_pass_bonus, lofted_pass_bonus, finishing_bonus,
		place_kicking_bonus, curl_bonus, header_bonus, defensive_awareness_bonus, ball_winning_bonus, kicking_power_bonus, speed_bonus,
		acceleration_bonus, balance_bonus, physical_contact_bonus, jump_bonus, stamina_bonus, gk_awareness_bonus, catching_bonus, clearing_bonus,
		reflexes_bonus, gk_reach_bonus, tight_possession_bonus, aggression_bonus };
}
namespace nm { //nm (nonbuffed) stats
	const int count = 10; //number of this type of player allowed
	const int form = 4;
	const int gk_form = 8;
	const int injury_resistance = 1;
	const int weak_foot_usage = 4;
	const int weak_foot_accuracy = 4;
	const int height = 180;
	const int gk_height = 180;
	const int skills = 7; //max number of non free skills allowed
	const int free_coms = 1; //free coms allowed
	const int free_a = 2; //free a positions allowed, note this includes the A position that a registered position gives

	const int base_stat = 77; //base stat value used if no changes. if a stat below is set at 0, this value will be used.
	//these are stat bonuses, they are added to the base stat value to arrive at the final stat value
	const int offensive_awareness_bonus = 10;
	const int ball_control_bonus = 10;
	const int dribbling_bonus = 10;
	const int low_pass_bonus = 10;
	const int lofted_pass_bonus = 10+5;
	const int finishing_bonus = 15;
	const int place_kicking_bonus = -7;
	const int curl_bonus = 10;
	const int header_bonus = 0;
	const int defensive_awareness_bonus = -4;
	const int ball_winning_bonus = -7;
	const int kicking_power_bonus = 10;
	const int speed_bonus = 0;
	const int acceleration_bonus = 0;
	const int balance_bonus = 0;
	const int physical_contact_bonus = -8;
	const int jump_bonus = -8;
	const int stamina_bonus = -15;
	const int gk_awareness_bonus = 0;
	const int catching_bonus = -7;
	const int clearing_bonus = 0;
	const int reflexes_bonus = -4;
	const int gk_reach_bonus = -4;
	const int tight_possession_bonus = 10;
	const int aggression_bonus = 10+5;
	const int stat_array_bonus[] = { offensive_awareness_bonus, ball_control_bonus, dribbling_bonus, low_pass_bonus, lofted_pass_bonus, finishing_bonus,
		place_kicking_bonus, curl_bonus, header_bonus, defensive_awareness_bonus, ball_winning_bonus, kicking_power_bonus, speed_bonus,
		acceleration_bonus, balance_bonus, physical_contact_bonus, jump_bonus, stamina_bonus, gk_awareness_bonus, catching_bonus, clearing_bonus,
		reflexes_bonus, gk_reach_bonus, tight_possession_bonus, aggression_bonus };
}

namespace buffed { //buffed player stats
	const int count = 8; //number of this type of player allowed
	const int form = 4;
	const int injury_resistance = 1;
	const int weak_foot_usage = 4;
	const int weak_foot_accuracy = 4;
	//const int weak_foot_usage_debuff = 2; //no longer used
	//const int weak_foot_accuracy_debuff = 2;
	const int height = 188;
	const int skills = 7; //max number of non free skills allowed
	const int free_coms = 1; //free coms allowed
	const int free_a = 1; //free a positions allowed, note this includes the A position that a registered position gives

	const int base_stat = 77; //base stat value used if no changes. if a stat below is set at 0, this value will be used.
	//these are stat bonuses, they are added to the base stat value to arrive at the final stat value
	const int offensive_awareness_bonus = 10+5;
	const int ball_control_bonus = 10;
	const int dribbling_bonus = 10+5;
	const int low_pass_bonus = 10;
	const int lofted_pass_bonus = 10;
	const int finishing_bonus = 15;
	const int place_kicking_bonus = -7;
	const int curl_bonus = 10;
	const int header_bonus = 0;
	const int defensive_awareness_bonus = -4-26;
	const int ball_winning_bonus = -7;
	const int kicking_power_bonus = 10+5;
	const int speed_bonus = 10;
	const int acceleration_bonus = 10;
	const int balance_bonus = 10;
	const int physical_contact_bonus = 5;
	const int jump_bonus = 0;
	const int stamina_bonus = -15;
	const int gk_awareness_bonus = 0;
	const int catching_bonus = -7;
	const int clearing_bonus = 0;
	const int reflexes_bonus = -4;
	const int gk_reach_bonus = -4;
	const int tight_possession_bonus = 10;
	const int aggression_bonus = 10;
	const int stat_array_bonus[] = { offensive_awareness_bonus, ball_control_bonus, dribbling_bonus, low_pass_bonus, lofted_pass_bonus, finishing_bonus,
		place_kicking_bonus, curl_bonus, header_bonus, defensive_awareness_bonus, ball_winning_bonus, kicking_power_bonus, speed_bonus,
		acceleration_bonus, balance_bonus, physical_contact_bonus, jump_bonus, stamina_bonus, gk_awareness_bonus, catching_bonus, clearing_bonus,
		reflexes_bonus, gk_reach_bonus, tight_possession_bonus, aggression_bonus };
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
	//these are stat bonuses, they are added to the base stat value to arrive at the final stat value
	const int offensive_awareness_bonus = 0;
	const int ball_control_bonus = 0;
	const int dribbling_bonus = 0;
	const int low_pass_bonus = 0;
	const int lofted_pass_bonus = 0;
	const int finishing_bonus = 0;
	const int place_kicking_bonus = 0;
	const int curl_bonus = 0;
	const int header_bonus = 0;
	const int defensive_awareness_bonus = 0;
	const int ball_winning_bonus = 0;
	const int kicking_power_bonus = 0;
	const int speed_bonus = 0;
	const int acceleration_bonus = 0;
	const int balance_bonus = 0;
	const int physical_contact_bonus = 0;
	const int jump_bonus = 0;
	const int stamina_bonus = 0;
	const int gk_awareness_bonus = 0;
	const int catching_bonus = 0;
	const int clearing_bonus = 0;
	const int reflexes_bonus = 0;
	const int gk_reach_bonus = 0;
	const int tight_possession_bonus = 0;
	const int aggression_bonus = 0;
	const int stat_array_bonus[] = { offensive_awareness_bonus, ball_control_bonus, dribbling_bonus, low_pass_bonus, lofted_pass_bonus, finishing_bonus, 
		place_kicking_bonus, curl_bonus, header_bonus, defensive_awareness_bonus, ball_winning_bonus, kicking_power_bonus, speed_bonus, 
		acceleration_bonus, balance_bonus, physical_contact_bonus, jump_bonus, stamina_bonus, gk_awareness_bonus, catching_bonus, clearing_bonus, 
		reflexes_bonus, gk_reach_bonus, tight_possession_bonus, aggression_bonus };
}
*/

//playstyle bonus stat stuff
//these are added to the stats granted by player type (final stat is [player_type]::[stat] + [playstyle]::[stat]_playstyle_buff )
//currently only gold players use these, if the bonus depends on player type these could become nested namespaces
//default value of a buff is 0, only need to include it in the namespace if its not 0.
const int offensive_awareness_playstyle_buff = 0;
const int ball_control_playstyle_buff = 0;
const int dribbling_playstyle_buff = 0;
const int low_pass_playstyle_buff = 0;
const int lofted_pass_playstyle_buff = 0;
const int finishing_playstyle_buff = 0;
const int place_kicking_playstyle_buff = 0;
const int curl_playstyle_buff = 0;
const int header_playstyle_buff = 0;
const int defensive_awareness_playstyle_buff = 0;
const int ball_winning_playstyle_buff = 0;
const int kicking_power_playstyle_buff = 0;
const int speed_playstyle_buff = 0;
const int acceleration_playstyle_buff = 0;
const int balance_playstyle_buff = 0;
const int physical_contact_playstyle_buff = 0;
const int jump_playstyle_buff = 0;
const int stamina_playstyle_buff = 0;
const int gk_awareness_playstyle_buff = 0;
const int catching_playstyle_buff = 0;
const int clearing_playstyle_buff = 0;
const int reflexes_playstyle_buff = 0;
const int gk_reach_playstyle_buff = 0;
const int tight_possession_playstyle_buff = 0;
const int aggression_playstyle_buff = 0;

namespace None { //no playstyle
	//has no bonuses
	const int stat_array_playstyle_buff[] = { offensive_awareness_playstyle_buff, ball_control_playstyle_buff, dribbling_playstyle_buff, low_pass_playstyle_buff, lofted_pass_playstyle_buff, finishing_playstyle_buff, place_kicking_playstyle_buff, 
		curl_playstyle_buff, header_playstyle_buff, defensive_awareness_playstyle_buff, ball_winning_playstyle_buff, kicking_power_playstyle_buff, speed_playstyle_buff, acceleration_playstyle_buff, balance_playstyle_buff, 
		physical_contact_playstyle_buff, jump_playstyle_buff, stamina_playstyle_buff, gk_awareness_playstyle_buff, catching_playstyle_buff, clearing_playstyle_buff, reflexes_playstyle_buff, gk_reach_playstyle_buff,
		tight_possession_playstyle_buff, aggression_playstyle_buff };
}
namespace Goal_Poacher {
	//has no bonuses
	const int stat_array_playstyle_buff[] = { offensive_awareness_playstyle_buff, ball_control_playstyle_buff, dribbling_playstyle_buff, low_pass_playstyle_buff, lofted_pass_playstyle_buff, finishing_playstyle_buff, place_kicking_playstyle_buff,
		curl_playstyle_buff, header_playstyle_buff, defensive_awareness_playstyle_buff, ball_winning_playstyle_buff, kicking_power_playstyle_buff, speed_playstyle_buff, acceleration_playstyle_buff, balance_playstyle_buff,
		physical_contact_playstyle_buff, jump_playstyle_buff, stamina_playstyle_buff, gk_awareness_playstyle_buff, catching_playstyle_buff, clearing_playstyle_buff, reflexes_playstyle_buff, gk_reach_playstyle_buff,
		tight_possession_playstyle_buff, aggression_playstyle_buff };
}
namespace Dummy_Runner {
	//has no bonuses
	const int stat_array_playstyle_buff[] = { offensive_awareness_playstyle_buff, ball_control_playstyle_buff, dribbling_playstyle_buff, low_pass_playstyle_buff, lofted_pass_playstyle_buff, finishing_playstyle_buff, place_kicking_playstyle_buff,
		curl_playstyle_buff, header_playstyle_buff, defensive_awareness_playstyle_buff, ball_winning_playstyle_buff, kicking_power_playstyle_buff, speed_playstyle_buff, acceleration_playstyle_buff, balance_playstyle_buff,
		physical_contact_playstyle_buff, jump_playstyle_buff, stamina_playstyle_buff, gk_awareness_playstyle_buff, catching_playstyle_buff, clearing_playstyle_buff, reflexes_playstyle_buff, gk_reach_playstyle_buff,
		tight_possession_playstyle_buff, aggression_playstyle_buff };
}
namespace Fox_in_the_Box {
	const int ball_winning_playstyle_buff = 5;
	const int defensive_awareness_playstyle_buff = -5;
	const int stat_array_playstyle_buff[] = { offensive_awareness_playstyle_buff, ball_control_playstyle_buff, dribbling_playstyle_buff, low_pass_playstyle_buff, lofted_pass_playstyle_buff, finishing_playstyle_buff, place_kicking_playstyle_buff,
		curl_playstyle_buff, header_playstyle_buff, defensive_awareness_playstyle_buff, ball_winning_playstyle_buff, kicking_power_playstyle_buff, speed_playstyle_buff, acceleration_playstyle_buff, balance_playstyle_buff,
		physical_contact_playstyle_buff, jump_playstyle_buff, stamina_playstyle_buff, gk_awareness_playstyle_buff, catching_playstyle_buff, clearing_playstyle_buff, reflexes_playstyle_buff, gk_reach_playstyle_buff,
		tight_possession_playstyle_buff, aggression_playstyle_buff };
}
namespace Target_Man {
	const int physical_contact_playstyle_buff = 5;
	const int defensive_awareness_playstyle_buff = -5;
	const int stat_array_playstyle_buff[] = { offensive_awareness_playstyle_buff, ball_control_playstyle_buff, dribbling_playstyle_buff, low_pass_playstyle_buff, lofted_pass_playstyle_buff, finishing_playstyle_buff, place_kicking_playstyle_buff,
		curl_playstyle_buff, header_playstyle_buff, defensive_awareness_playstyle_buff, ball_winning_playstyle_buff, kicking_power_playstyle_buff, speed_playstyle_buff, acceleration_playstyle_buff, balance_playstyle_buff,
		physical_contact_playstyle_buff, jump_playstyle_buff, stamina_playstyle_buff, gk_awareness_playstyle_buff, catching_playstyle_buff, clearing_playstyle_buff, reflexes_playstyle_buff, gk_reach_playstyle_buff,
		tight_possession_playstyle_buff, aggression_playstyle_buff };
}
namespace Creative_Playmaker {
	const int stamina_playstyle_buff = 5;
	const int defensive_awareness_playstyle_buff = -5;
	const int stat_array_playstyle_buff[] = { offensive_awareness_playstyle_buff, ball_control_playstyle_buff, dribbling_playstyle_buff, low_pass_playstyle_buff, lofted_pass_playstyle_buff, finishing_playstyle_buff, place_kicking_playstyle_buff,
		curl_playstyle_buff, header_playstyle_buff, defensive_awareness_playstyle_buff, ball_winning_playstyle_buff, kicking_power_playstyle_buff, speed_playstyle_buff, acceleration_playstyle_buff, balance_playstyle_buff,
		physical_contact_playstyle_buff, jump_playstyle_buff, stamina_playstyle_buff, gk_awareness_playstyle_buff, catching_playstyle_buff, clearing_playstyle_buff, reflexes_playstyle_buff, gk_reach_playstyle_buff,
		tight_possession_playstyle_buff, aggression_playstyle_buff };
}
namespace Prolific_Winger {
	//has no bonuses
	const int stat_array_playstyle_buff[] = { offensive_awareness_playstyle_buff, ball_control_playstyle_buff, dribbling_playstyle_buff, low_pass_playstyle_buff, lofted_pass_playstyle_buff, finishing_playstyle_buff, place_kicking_playstyle_buff,
		curl_playstyle_buff, header_playstyle_buff, defensive_awareness_playstyle_buff, ball_winning_playstyle_buff, kicking_power_playstyle_buff, speed_playstyle_buff, acceleration_playstyle_buff, balance_playstyle_buff,
		physical_contact_playstyle_buff, jump_playstyle_buff, stamina_playstyle_buff, gk_awareness_playstyle_buff, catching_playstyle_buff, clearing_playstyle_buff, reflexes_playstyle_buff, gk_reach_playstyle_buff,
		tight_possession_playstyle_buff, aggression_playstyle_buff };
}
namespace Roaming_Flank {
	//has no bonuses
	const int stat_array_playstyle_buff[] = { offensive_awareness_playstyle_buff, ball_control_playstyle_buff, dribbling_playstyle_buff, low_pass_playstyle_buff, lofted_pass_playstyle_buff, finishing_playstyle_buff, place_kicking_playstyle_buff,
		curl_playstyle_buff, header_playstyle_buff, defensive_awareness_playstyle_buff, ball_winning_playstyle_buff, kicking_power_playstyle_buff, speed_playstyle_buff, acceleration_playstyle_buff, balance_playstyle_buff,
		physical_contact_playstyle_buff, jump_playstyle_buff, stamina_playstyle_buff, gk_awareness_playstyle_buff, catching_playstyle_buff, clearing_playstyle_buff, reflexes_playstyle_buff, gk_reach_playstyle_buff,
		tight_possession_playstyle_buff, aggression_playstyle_buff };
}
namespace Crossing_Specialist {
	//has no bonuses
	const int stat_array_playstyle_buff[] = { offensive_awareness_playstyle_buff, ball_control_playstyle_buff, dribbling_playstyle_buff, low_pass_playstyle_buff, lofted_pass_playstyle_buff, finishing_playstyle_buff, place_kicking_playstyle_buff,
		curl_playstyle_buff, header_playstyle_buff, defensive_awareness_playstyle_buff, ball_winning_playstyle_buff, kicking_power_playstyle_buff, speed_playstyle_buff, acceleration_playstyle_buff, balance_playstyle_buff,
		physical_contact_playstyle_buff, jump_playstyle_buff, stamina_playstyle_buff, gk_awareness_playstyle_buff, catching_playstyle_buff, clearing_playstyle_buff, reflexes_playstyle_buff, gk_reach_playstyle_buff,
		tight_possession_playstyle_buff, aggression_playstyle_buff };
}
namespace Classic_No_10 {
	//has no bonuses
	const int stat_array_playstyle_buff[] = { offensive_awareness_playstyle_buff, ball_control_playstyle_buff, dribbling_playstyle_buff, low_pass_playstyle_buff, lofted_pass_playstyle_buff, finishing_playstyle_buff, place_kicking_playstyle_buff,
		curl_playstyle_buff, header_playstyle_buff, defensive_awareness_playstyle_buff, ball_winning_playstyle_buff, kicking_power_playstyle_buff, speed_playstyle_buff, acceleration_playstyle_buff, balance_playstyle_buff,
		physical_contact_playstyle_buff, jump_playstyle_buff, stamina_playstyle_buff, gk_awareness_playstyle_buff, catching_playstyle_buff, clearing_playstyle_buff, reflexes_playstyle_buff, gk_reach_playstyle_buff,
		tight_possession_playstyle_buff, aggression_playstyle_buff };
}
namespace Hole_Player {
	//has no bonuses
	const int stat_array_playstyle_buff[] = { offensive_awareness_playstyle_buff, ball_control_playstyle_buff, dribbling_playstyle_buff, low_pass_playstyle_buff, lofted_pass_playstyle_buff, finishing_playstyle_buff, place_kicking_playstyle_buff,
		curl_playstyle_buff, header_playstyle_buff, defensive_awareness_playstyle_buff, ball_winning_playstyle_buff, kicking_power_playstyle_buff, speed_playstyle_buff, acceleration_playstyle_buff, balance_playstyle_buff,
		physical_contact_playstyle_buff, jump_playstyle_buff, stamina_playstyle_buff, gk_awareness_playstyle_buff, catching_playstyle_buff, clearing_playstyle_buff, reflexes_playstyle_buff, gk_reach_playstyle_buff,
		tight_possession_playstyle_buff, aggression_playstyle_buff };
}
namespace Box_to_Box {
	//has no bonuses
	const int stat_array_playstyle_buff[] = { offensive_awareness_playstyle_buff, ball_control_playstyle_buff, dribbling_playstyle_buff, low_pass_playstyle_buff, lofted_pass_playstyle_buff, finishing_playstyle_buff, place_kicking_playstyle_buff,
		curl_playstyle_buff, header_playstyle_buff, defensive_awareness_playstyle_buff, ball_winning_playstyle_buff, kicking_power_playstyle_buff, speed_playstyle_buff, acceleration_playstyle_buff, balance_playstyle_buff,
		physical_contact_playstyle_buff, jump_playstyle_buff, stamina_playstyle_buff, gk_awareness_playstyle_buff, catching_playstyle_buff, clearing_playstyle_buff, reflexes_playstyle_buff, gk_reach_playstyle_buff,
		tight_possession_playstyle_buff, aggression_playstyle_buff };
}
namespace The_Destroyer {
	//has no bonuses
	const int stat_array_playstyle_buff[] = { offensive_awareness_playstyle_buff, ball_control_playstyle_buff, dribbling_playstyle_buff, low_pass_playstyle_buff, lofted_pass_playstyle_buff, finishing_playstyle_buff, place_kicking_playstyle_buff,
		curl_playstyle_buff, header_playstyle_buff, defensive_awareness_playstyle_buff, ball_winning_playstyle_buff, kicking_power_playstyle_buff, speed_playstyle_buff, acceleration_playstyle_buff, balance_playstyle_buff,
		physical_contact_playstyle_buff, jump_playstyle_buff, stamina_playstyle_buff, gk_awareness_playstyle_buff, catching_playstyle_buff, clearing_playstyle_buff, reflexes_playstyle_buff, gk_reach_playstyle_buff,
		tight_possession_playstyle_buff, aggression_playstyle_buff };
}
namespace Orchestrator {
	//has no bonuses
	const int stat_array_playstyle_buff[] = { offensive_awareness_playstyle_buff, ball_control_playstyle_buff, dribbling_playstyle_buff, low_pass_playstyle_buff, lofted_pass_playstyle_buff, finishing_playstyle_buff, place_kicking_playstyle_buff,
		curl_playstyle_buff, header_playstyle_buff, defensive_awareness_playstyle_buff, ball_winning_playstyle_buff, kicking_power_playstyle_buff, speed_playstyle_buff, acceleration_playstyle_buff, balance_playstyle_buff,
		physical_contact_playstyle_buff, jump_playstyle_buff, stamina_playstyle_buff, gk_awareness_playstyle_buff, catching_playstyle_buff, clearing_playstyle_buff, reflexes_playstyle_buff, gk_reach_playstyle_buff,
		tight_possession_playstyle_buff, aggression_playstyle_buff };
}
namespace Anchor_Man {
	//has no bonuses
	const int stat_array_playstyle_buff[] = { offensive_awareness_playstyle_buff, ball_control_playstyle_buff, dribbling_playstyle_buff, low_pass_playstyle_buff, lofted_pass_playstyle_buff, finishing_playstyle_buff, place_kicking_playstyle_buff,
		curl_playstyle_buff, header_playstyle_buff, defensive_awareness_playstyle_buff, ball_winning_playstyle_buff, kicking_power_playstyle_buff, speed_playstyle_buff, acceleration_playstyle_buff, balance_playstyle_buff,
		physical_contact_playstyle_buff, jump_playstyle_buff, stamina_playstyle_buff, gk_awareness_playstyle_buff, catching_playstyle_buff, clearing_playstyle_buff, reflexes_playstyle_buff, gk_reach_playstyle_buff,
		tight_possession_playstyle_buff, aggression_playstyle_buff };
}
namespace Offensive_Fullback {
	//has no bonuses
	const int stat_array_playstyle_buff[] = { offensive_awareness_playstyle_buff, ball_control_playstyle_buff, dribbling_playstyle_buff, low_pass_playstyle_buff, lofted_pass_playstyle_buff, finishing_playstyle_buff, place_kicking_playstyle_buff,
		curl_playstyle_buff, header_playstyle_buff, defensive_awareness_playstyle_buff, ball_winning_playstyle_buff, kicking_power_playstyle_buff, speed_playstyle_buff, acceleration_playstyle_buff, balance_playstyle_buff,
		physical_contact_playstyle_buff, jump_playstyle_buff, stamina_playstyle_buff, gk_awareness_playstyle_buff, catching_playstyle_buff, clearing_playstyle_buff, reflexes_playstyle_buff, gk_reach_playstyle_buff,
		tight_possession_playstyle_buff, aggression_playstyle_buff };
}
namespace Fullback_Finisher {
	//has no bonuses
	const int stat_array_playstyle_buff[] = { offensive_awareness_playstyle_buff, ball_control_playstyle_buff, dribbling_playstyle_buff, low_pass_playstyle_buff, lofted_pass_playstyle_buff, finishing_playstyle_buff, place_kicking_playstyle_buff,
		curl_playstyle_buff, header_playstyle_buff, defensive_awareness_playstyle_buff, ball_winning_playstyle_buff, kicking_power_playstyle_buff, speed_playstyle_buff, acceleration_playstyle_buff, balance_playstyle_buff,
		physical_contact_playstyle_buff, jump_playstyle_buff, stamina_playstyle_buff, gk_awareness_playstyle_buff, catching_playstyle_buff, clearing_playstyle_buff, reflexes_playstyle_buff, gk_reach_playstyle_buff,
		tight_possession_playstyle_buff, aggression_playstyle_buff };
}
namespace Defensive_Fullback {
	//has no bonuses
	const int stat_array_playstyle_buff[] = { offensive_awareness_playstyle_buff, ball_control_playstyle_buff, dribbling_playstyle_buff, low_pass_playstyle_buff, lofted_pass_playstyle_buff, finishing_playstyle_buff, place_kicking_playstyle_buff,
		curl_playstyle_buff, header_playstyle_buff, defensive_awareness_playstyle_buff, ball_winning_playstyle_buff, kicking_power_playstyle_buff, speed_playstyle_buff, acceleration_playstyle_buff, balance_playstyle_buff,
		physical_contact_playstyle_buff, jump_playstyle_buff, stamina_playstyle_buff, gk_awareness_playstyle_buff, catching_playstyle_buff, clearing_playstyle_buff, reflexes_playstyle_buff, gk_reach_playstyle_buff,
		tight_possession_playstyle_buff, aggression_playstyle_buff };
}
namespace Build_Up {
	//has no bonuses
	const int stat_array_playstyle_buff[] = { offensive_awareness_playstyle_buff, ball_control_playstyle_buff, dribbling_playstyle_buff, low_pass_playstyle_buff, lofted_pass_playstyle_buff, finishing_playstyle_buff, place_kicking_playstyle_buff,
		curl_playstyle_buff, header_playstyle_buff, defensive_awareness_playstyle_buff, ball_winning_playstyle_buff, kicking_power_playstyle_buff, speed_playstyle_buff, acceleration_playstyle_buff, balance_playstyle_buff,
		physical_contact_playstyle_buff, jump_playstyle_buff, stamina_playstyle_buff, gk_awareness_playstyle_buff, catching_playstyle_buff, clearing_playstyle_buff, reflexes_playstyle_buff, gk_reach_playstyle_buff,
		tight_possession_playstyle_buff, aggression_playstyle_buff };
}
namespace Extra_Frontman {
	//has no bonuses
	const int stat_array_playstyle_buff[] = { offensive_awareness_playstyle_buff, ball_control_playstyle_buff, dribbling_playstyle_buff, low_pass_playstyle_buff, lofted_pass_playstyle_buff, finishing_playstyle_buff, place_kicking_playstyle_buff,
		curl_playstyle_buff, header_playstyle_buff, defensive_awareness_playstyle_buff, ball_winning_playstyle_buff, kicking_power_playstyle_buff, speed_playstyle_buff, acceleration_playstyle_buff, balance_playstyle_buff,
		physical_contact_playstyle_buff, jump_playstyle_buff, stamina_playstyle_buff, gk_awareness_playstyle_buff, catching_playstyle_buff, clearing_playstyle_buff, reflexes_playstyle_buff, gk_reach_playstyle_buff,
		tight_possession_playstyle_buff, aggression_playstyle_buff };
}
namespace Offensive_Goalkeeper {
	//has no bonuses
	const int stat_array_playstyle_buff[] = { offensive_awareness_playstyle_buff, ball_control_playstyle_buff, dribbling_playstyle_buff, low_pass_playstyle_buff, lofted_pass_playstyle_buff, finishing_playstyle_buff, place_kicking_playstyle_buff,
		curl_playstyle_buff, header_playstyle_buff, defensive_awareness_playstyle_buff, ball_winning_playstyle_buff, kicking_power_playstyle_buff, speed_playstyle_buff, acceleration_playstyle_buff, balance_playstyle_buff,
		physical_contact_playstyle_buff, jump_playstyle_buff, stamina_playstyle_buff, gk_awareness_playstyle_buff, catching_playstyle_buff, clearing_playstyle_buff, reflexes_playstyle_buff, gk_reach_playstyle_buff,
		tight_possession_playstyle_buff, aggression_playstyle_buff };
}
namespace Defensive_Goalkeeper {
	//has no bonuses
	const int stat_array_playstyle_buff[] = { offensive_awareness_playstyle_buff, ball_control_playstyle_buff, dribbling_playstyle_buff, low_pass_playstyle_buff, lofted_pass_playstyle_buff, finishing_playstyle_buff, place_kicking_playstyle_buff,
		curl_playstyle_buff, header_playstyle_buff, defensive_awareness_playstyle_buff, ball_winning_playstyle_buff, kicking_power_playstyle_buff, speed_playstyle_buff, acceleration_playstyle_buff, balance_playstyle_buff,
		physical_contact_playstyle_buff, jump_playstyle_buff, stamina_playstyle_buff, gk_awareness_playstyle_buff, catching_playstyle_buff, clearing_playstyle_buff, reflexes_playstyle_buff, gk_reach_playstyle_buff,
		tight_possession_playstyle_buff, aggression_playstyle_buff };
}
extern const int* full_stat_array_playstyle_buff[25];


//call full_stat_array_playstyle_buff with [x][y] where x is the index of the playstyle in the editor (listed below), and y is the stat that is buffed
/*(THIS IS PES 20/21):
0: "None"
1: "Goal Poacher"
2: "Dummy Runner"
3: "Fox in the Box"
4: "Target Man"
5: "Creative Playmaker"
6: "Prolific Winger"
7: "Roaming Flank"
8: "Crossing Specialist"
9: "Classic No. 10"
10: "Hole Player"
11: "Box to Box"
12: "The Destroyer"
13: "Orchestrator"
14: "Anchor Man"
15: "Offensive Fullback"
16: "Fullback Finisher"
17: "Defensive Fullback"
18: "Build Up"
19: "Extra Frontman"
20: "Offensive Goalkeeper"
21: "Defensive Goalkeeper"



*/