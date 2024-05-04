#include "DecisionTree.h"
#include "DecisionTreeNode.h"
#include "Player.h"
#include <iostream>
#include <cstddef>

// Define the storyline vector
DecisionTree::DecisionTree() {
 
/*DecisionTree::DecisionTree() */
    // Create decision tree nodes for each chapter and decision
    DecisionTreeNode* start = new DecisionTreeNode("start",true,false, " ");

    // Chapter 1: The Arcane Academy
    DecisionTreeNode* chapter1 = new DecisionTreeNode("Chapter 1: The Arcane Academy",true,false,"\nYou wake up in your dormitory at the Arcane Academy, surrounded by fellow aspiring sorcerers.\nAs you glance out the window, you see the sun casting its warm light over the ancient towers of the academy. \nToday marks the beginning of your journey into the world of magic.\n\n");
    DecisionTreeNode* attendClasses = new DecisionTreeNode("Attend your first day of classes",false,false,"\nYou decide to attend your first day of classes.\nWalking through the grand halls of the Arcane Academy, you marvel at the magical tapestries that adorn the walls, depicting legendary battles and mythical creatures.\nThe air is charged with anticipation as you take your seat among your fellow students, eager to learn the secrets of magic.\nThroughout the day, you engage in spellcasting lessons, honing your skills under the guidance of experienced instructors.\nWith each incantation and gesture, you feel a sense of accomplishment wash over you, knowing that you're one step closer to mastering the arcane arts.\n\n");
    DecisionTreeNode* exploreGrounds = new DecisionTreeNode("Explore the academy grounds",false,false,"\nYou decide to explore the academy grounds.\nVenturing into the lush gardens and winding pathways of the academy, you stumble upon ancient statues and enchanted fountains, each telling a story of the academy's rich history.\nAs you navigate through the maze-like gardens, you uncover forgotten relics and encounter magical creatures that inhabit the academy grounds.\nWith each new discovery, you gain a deeper understanding of the mystical forces that surround you, earning valuable experience through exploration and curiosity.\n\n");
    DecisionTreeNode* visitLibrary = new DecisionTreeNode("Visit the library",false,false,"\nYou decide to visit the library.\nEntering the library, you're greeted by the scent of old parchment and the soft glow of candlelight that illuminates row upon row of dusty tomes and ancient scrolls.\nThe shelves groan under the weight of centuries of knowledge, beckoning you to delve into their secrets.\nLost in the labyrinth of knowledge, you uncover forgotten incantations and unlock the secrets of ancient magics.\nWith each page turned, you feel a surge of power coursing through you, as the wisdom of the ages becomes your own.\nIn the quiet solitude of the library, you earn experience not just through study, but through the discovery of hidden truths and the mastery of ancient lore.\n\n");

    DecisionTreeNode* participateSpellcasting = new DecisionTreeNode("Participate in spellcasting lessons",false,false,"\nAs you immerse yourself in the spellcasting lessons, you find yourself drawn into a world of mystic energies and ancient incantations. \nThe instructor, a venerable wizard with a twinkle in his eye, guides you through the intricate movements and precise pronunciations required to channel magic. \nWith each spell successfully cast, you feel a surge of power coursing through your veins, igniting a hunger for knowledge and mastery. \nBy the end of the day, you stand taller, more confident in your abilities, ready to face whatever challenges the magical world may throw your way.\n\n");
    DecisionTreeNode* joinClub = new DecisionTreeNode("Join an extracurricular magic club",false,false,"\nIntrigued by the prospect of exploring magic beyond the confines of the classroom, you decide to join an extracurricular magic club. \nLed by a group of enthusiastic students, each specializing in different magical disciplines, the club offers a diverse array of activities and experiments. \nFrom potion brewing to rune casting, you find yourself swept up in a whirlwind of magical exploration. \nAs you bond with your fellow club members over shared discoveries and misadventures, you feel a sense of belonging and camaraderie unlike anything you've experienced before.\n\n");
    DecisionTreeNode* exploreLibrary = new DecisionTreeNode("Explore the library for ancient tomes",false,false,"\nWith a thirst for knowledge that cannot be quenched by mere classroom lessons, you set off to explore the vast repository of ancient tomes housed within the academy's library. \nLost in a labyrinth of dusty shelves and forgotten manuscripts, you uncover secrets long thought lost to the annals of time. \nEach book holds the promise of untold wisdom and power, waiting to be unlocked by a curious mind. \nAs you pore over ancient texts and decipher cryptic runes, you feel a sense of purpose awaken within you, driving you ever deeper into the mysteries of magic.\n\n");

    DecisionTreeNode* discoverArtifact = new DecisionTreeNode("Discover a hidden magical artifact",false,false,"\nAs you delve deeper into the maze-like gardens, your keen eye catches a glimmer of something hidden amidst the foliage. \nPushing aside overgrown vines and brambles, you uncover a long-forgotten chamber buried beneath the earth. \nWithin lies a treasure trove of ancient artifacts, their surfaces pulsing with latent magical energy. Among them, one artifact stands out—a shimmering crystal orb said to hold the power of foresight. \nEntranced by its otherworldly glow, you reach out to grasp it, feeling a surge of power course through your veins. \nWith the artifact in hand, you sense that your destiny has been forever altered, opening the door to untold adventures and revelations.\n\n");
    DecisionTreeNode* encounterCreature = new DecisionTreeNode("Encounter a mischievous magical creature",false,false,"\nAs you meander through the labyrinthine gardens, you catch sight of a curious creature darting among the trees—a pixie, \nwith iridescent wings and mischievous eyes. Intrigued by its playful antics, you follow the creature \ndeeper into the heart of the garden, where you stumble upon a hidden glade bathed in dappled sunlight. Here, surrounded by the tranquil beauty of nature, you engage in a whimsical game of chase with \nthe pixie, laughter echoing through the air. In the midst of your revelry, the pixie reveals itself to be a guardian spirit of the academy, \noffering you its blessing and protection in exchange for your friendship. With a mischievous wink, it disappears into the shadows, leaving you with a newfound sense of wonder and camaraderie.\n\n");
    DecisionTreeNode* practiceSpells = new DecisionTreeNode("Practice casting spells in the training arena",false,false,"\nInspired by the magical energies that permeate the academy grounds, you seek out the training arena—a sprawling expanse \nof open sky and shimmering energy fields. Here, surrounded by fellow students honing their skills, \nyou unleash the full extent of your magical prowess. With each incantation and gesture, you conjure torrents of flame and arcs of lightning, shaping the very elements to your will. \nAs you immerse yourself in the art of spellcasting, you feel a sense of liberation and empowerment unlike anything you've experienced before. \nBy the time you leave the arena, sweat dripping from your brow and heart pounding with exhilaration, you know that you've taken the first step on a journey towards mastery and enlightenment.\n\n");

    DecisionTreeNode* researchTechniques = new DecisionTreeNode("Research advanced spellcasting techniques",false,false,"\nYou delve into the ancient tomes, searching for knowledge on advanced spellcasting techniques. Page after page, you uncover \nforgotten incantations and intricate rituals. With each discovery, your understanding of magic deepens, \nempowering you to wield spells with precision and mastery.\n\n");
    DecisionTreeNode* studyHistory = new DecisionTreeNode("Study the history of magical battles",false,false,"\nFascinated by tales of legendary sorcerers and epic magical battles, you immerse yourself in the history of magic. Through ancient \nmanuscripts and accounts of past conflicts, you gain insight into the strategies and tactics of renowned wizards. \nArmed with this knowledge, you feel prepared to face any magical challenge that may lie ahead.\n\n");
    DecisionTreeNode* seekAdvice = new DecisionTreeNode("Seek advice from the wise librarian",false,false,"\nRecognizing the wisdom of the elderly librarian, you approach them for guidance. With a kind smile, they share their vast knowledge and \nexperience, offering valuable advice on the path of a sorcerer. Their words resonate with you, providing clarity \nand direction in your magical studies. Inspired by their wisdom, you leave the library with newfound confidence and purpose.\n\n");

    // Chapter 2: Training and Trials
    DecisionTreeNode* chapter2 = new DecisionTreeNode("Chapter 2: Training and Trials",true,false,"\nYou find yourself drawn deeper into the mysteries of the arcane, eager to test your newfound skills and face the challenges that lie ahead. As you embark on this new chapter of your journey, the academy buzzes with anticipation, each student forging their path towards mastery.\n\n");
    DecisionTreeNode* participateTournament = new DecisionTreeNode("Participate in a dueling tournament",true,false,"\nYou choose to participate in a dueling tournament\nYou enter the grand arena, where the air crackles with excitement and the cheers of the crowd echo off the stone walls. As you step onto the dueling grounds, you meet the gaze of your opponents, each one a formidable foe hungry for victory. With nerves of steel and spells at the ready, you brace yourself for the ultimate test of skill and strategy.\n\n");
    DecisionTreeNode* assistProfessor = new DecisionTreeNode("Assist a professor in conducting an experiment",true,false,"\nYou assist a professor in conducting an experiment.\nYou find yourself in the laboratory, surrounded by bubbling cauldrons and crackling vials of energy. Under the watchful eye of your mentor, you delve into the intricacies of magical experimentation, each test revealing new insights into the nature of arcane forces.\n\n");
    DecisionTreeNode* undertakeQuest = new DecisionTreeNode("Undertake a quest to retrieve a powerful artifact",true,false,"\nYou've heard tales of a legendary artifact hidden deep within the heart of an enchanted forest, said to hold immense power and ancient secrets.\nDriven by ambition and a thirst for knowledge, you embark on a perilous journey to claim this artifact as your own.\nWith each step forward, you feel the weight of destiny upon your shoulders, knowing that the challenges ahead will test your courage and determination like never before.\n\n");

    DecisionTreeNode* winTournament = new DecisionTreeNode("Win the tournament and gain respect",true,false,"\nWith unwavering focus and determination, you channel your magic with precision, outmaneuvering your opponents with cunning tactics and well-timed counters. As the final duel draws to a close, you stand victorious, your name echoing through the halls as a champion of the arcane. With newfound respect and admiration, you bask in the glory of your triumph, knowing that your journey has only just begun.\n\n");
    DecisionTreeNode* learnFromDefeat = new DecisionTreeNode("Learn from defeat and improve your skills",true,false,"\nDespite your best efforts, victory eludes you as you face opponents of unmatched skill and experience. Yet with each defeat comes valuable insight, as you analyze your mistakes and adapt your tactics for the battles ahead. Through perseverance and determination, you emerge from the tournament stronger and more resilient, ready to face whatever challenges the future may hold.\n\n");
    
    DecisionTreeNode* completeExperiment = new DecisionTreeNode("Successfully complete the experiment",true,false,"\nWith meticulous care and precision, you navigate the complexities of the experiment, overcoming obstacles with ingenuity and resourcefulness. As the final components align and the experiment reaches its climax, you watch with bated breath as the arcane energies surge and coalesce into a dazzling display of power. With the successful completion of the experiment, you earn the admiration of your peers and the respect of your mentor, knowing that your contributions have furthered the boundaries of magical knowledge.\n\n");
    DecisionTreeNode* faceChallenges = new DecisionTreeNode("Face unexpected challenges during the experiment",true,false,"\nMidway through the experiment, disaster strikes as unforeseen complications threaten to derail your progress. With time running short and danger looming, you must think quickly and adapt to the changing circumstances. Through quick thinking and resourcefulness, you navigate through the challenges, emerging victorious in the face of adversity. Though the path was fraught with peril, the knowledge gained from overcoming these obstacles proves invaluable, shaping you into a more resilient and adaptable sorcerer.\n\n");

    DecisionTreeNode* navigateForest = new DecisionTreeNode("Navigate through the enchanted forest",true,false,"\nYou chose to navigate through the enchanted forest.\nAs you delve deeper into the enchanted forest, the air grows thick with magic, and the trees seem to whisper secrets of ages past. Every step you take is fraught with peril, as unseen dangers lurk behind every shadow. Yet with determination driving you forward, you press on, navigating through the dense foliage and treacherous terrain.\n\nAs you journey deeper into the heart of the forest, you encounter obstacles that test your resolve and cunning. From treacherous ravines to winding mazes of thorns, each challenge presents a new opportunity to prove your mettle. With your magic as your guide, you navigate through the labyrinthine pathways, overcoming every obstacle that stands in your way.\n\nFinally, after what feels like an eternity of trials and tribulations, you emerge into a clearing bathed in ethereal light. Before you stands the artifact, its power radiating from within, beckoning you to claim it as your own. With a sense of triumph coursing through your veins, you reach out and grasp the artifact, feeling its energy surge through you as you claim victory over the enchanted forest.\n\n");
    DecisionTreeNode* solvePuzzles = new DecisionTreeNode("Solve puzzles to reach the artifact",true,false,"\nYou chose to solve the puzzles to reach the artifact.\nAs you encounter each puzzle along your journey, you find yourself tested in ways you never thought possible. From cryptic riddles to intricate mechanisms, each challenge pushes the limits of your intellect and resourcefulness. Yet with perseverance and ingenuity, you unravel the mysteries that guard the artifact, inching ever closer to your goal.\n\nWith each puzzle solved, you feel a sense of accomplishment wash over you, knowing that you are one step closer to claiming the artifact and unlocking its secrets. Yet as you approach the final challenge, you realize that the most daunting trial still lies ahead. With determination in your heart, you steel yourself for the ultimate test of skill and wit.\n\nHowever, despite your best efforts, you find yourself stumped by the final puzzle, its solution eluding your grasp. As frustration mounts and time slips away, you realize with a sinking heart that you have failed in your quest. With a heavy heart, you turn away from the artifact, knowing that its secrets will remain forever out of reach.\n\n");
    DecisionTreeNode* confrontGuardians = new DecisionTreeNode("Confront guardians protecting the artifact",true,false,"\nYou have decided to confront the guardians protecting the artifact.\nAs you stand before the guardians, you feel the weight of their gaze bearing down upon you, their presence a palpable reminder of the task that lies ahead. With every fiber of your being, you ready yourself for the battle to come, knowing that victory may come at a steep price.\n\nWith spells flying and magic crackling in the air, you engage the guardians in a fierce battle, each clash of power echoing through the forest. Yet despite your best efforts, the guardians prove to be formidable adversaries, their mastery of magic unmatched and their resolve unyielding.\n\nAs the battle rages on, you find yourself outmatched and outnumbered, your strength waning with each passing moment. With no other choice but to retreat, you concede defeat and retreat from the battlefield, knowing that the artifact will remain forever beyond your reach.\n\n");

    // Chapter 3: Allies and Adversaries
    DecisionTreeNode* chapter3 = new DecisionTreeNode("Chapter 3: Allies and Adversaries",true,false,"\nAs you reflect on your experiences and the trials you've overcome, a sense of growth and transformation begins to take root within you. Each challenge has shaped you in ways you never thought possible, honing your skills and deepening your understanding of the magical arts.\n\nWith newfound confidence and determination, you set your sights on the horizon, eager to embark on the next chapter of your adventure. Chapter 3 awaits, promising new allies and adversaries, challenges and triumphs yet to be discovered.\n\nChapter 3: Allies and Adversaries\n\nAs you step into Chapter 3, you find yourself amidst a landscape fraught with both danger and opportunity. Here, the choices you make will determine the course of your journey and the allies you gather along the way.\n\n");
    DecisionTreeNode* befriendAlchemist = new DecisionTreeNode("Befriend a talented alchemist",false,false,"\nVenturing into the bustling marketplace of the arcane city, you come across a humble alchemist's shop, its shelves lined with vials and potions of every hue. Intrigued by the promise of hidden knowledge, you strike up a conversation with the alchemist, eager to learn more about their craft.\n\n");
    DecisionTreeNode* formAlliance = new DecisionTreeNode("Form an alliance with a skilled warrior",false,false,"\nIn the heat of battle, you find yourself face to face with a seasoned warrior, their blade flashing in the sunlight as they fend off a horde of monsters. Impressed by their skill and prowess, you offer your aid, recognizing the value of their strength and courage.\n\n");
    DecisionTreeNode* seekGuidance = new DecisionTreeNode("Seek guidance from a wise elder mage",false,false,"\nIn your quest for knowledge, you seek out the counsel of a venerable elder mage, their wisdom said to rival that of the ancients. In their secluded tower, you find solace and enlightenment, your mind opened to truths beyond comprehension.\n\n");

    DecisionTreeNode* receivePotions = new DecisionTreeNode("Receive potions to enhance your abilities",false,false,"\nImpressed by your curiosity and determination, the alchemist offers to share their secrets with you, presenting you with a vial of potent potion brewed from rare ingredients. With a single sip, you feel a surge of energy coursing through your veins, your senses sharpening and your magic heightened.\n\n");
    DecisionTreeNode* helpAlchemist = new DecisionTreeNode("Help the alchemist with a personal quest",false,false,"\nMoved by the alchemist's plight, you offer your assistance, pledging to aid them in their quest in exchange for knowledge and power. Together, you set out on a journey fraught with danger and intrigue, facing challenges that test your skills and resolve.\n\n");
    
    DecisionTreeNode* trainTogether = new DecisionTreeNode("Train together in combat techniques",false,false,"\nUnited by a common goal, you and the warrior embark on a rigorous training regimen, honing your combat skills and learning from each other's strengths. Through sweat and determination, you forge a bond that transcends mere camaraderie, becoming true allies in the fight against darkness.\n\n");
    DecisionTreeNode* rescueWarrior = new DecisionTreeNode("Rescue the warrior from a dangerous situation",false,false,"\nWhen the warrior finds themselves in peril, you do not hesitate to come to their aid, risking life and limb to pull them from the jaws of danger. In doing so, you earn their respect and gratitude, solidifying your bond and laying the foundation for a powerful alliance.\n\n");

    DecisionTreeNode* learnSpells = new DecisionTreeNode("Learn ancient spells from the elder mage",false,false,"\nUnder the tutelage of the elder mage, you delve into the mysteries of the arcane, mastering spells of old and unlocking the secrets of lost civilizations. With each incantation, you feel a connection to the magic that courses through the very fabric of existence, your power growing with each passing day.\n\n");
    DecisionTreeNode* retrieveArtifacts = new DecisionTreeNode("Retrieve lost artifacts for the elder mage",false,false,"\nDriven by a thirst for knowledge and adventure, you set out on a quest to recover ancient artifacts lost to the annals of time. Guided by the elder mage's wisdom, you navigate treacherous ruins and overcome deadly traps, your determination unwavering in the face of adversity.\n\n");

    // Chapter 4: Confronting the Darkness
    DecisionTreeNode* chapter4 = new DecisionTreeNode("Chapter 4: Confronting the Darkness",true,false,"\nAfter forging alliances and seeking wisdom in Chapter 3, you find yourself standing at the threshold of a new chapter in your journey. The bonds you've formed and the knowledge you've gained will serve as your guiding light as you step into the unknown.\n\nAs you reflect on your experiences, a sense of anticipation stirs within you, mingled with a hint of trepidation. The path ahead is fraught with peril and uncertainty, but you know that with the support of your allies and the wisdom of your mentors, you are prepared to face whatever challenges lie ahead.\n\nWith determination in your heart and magic coursing through your veins, you set your sights on the horizon, ready to confront the darkness that threatens to engulf the realm. Chapter 4 beckons, promising trials and tribulations that will test your strength and resilience like never before.\n\nChapter 4: Confronting the Darkness\n\nAs you venture into the heart of darkness, you find yourself embroiled in a conflict of epic proportions, where the fate of the realm hangs in the balance. Here, you must navigate a perilous landscape fraught with danger and intrigue, where every decision you make will shape the course of history.\n\n");
    DecisionTreeNode* travelFortress = new DecisionTreeNode("Travel to the Goblin King's fortress",false,false,"\nYou decide to travel to the Goblin King's fortress.\nWith the fate of the realm hanging in the balance, you embark on a perilous journey to confront the Goblin King and put an end to his reign of terror once and for all. As you traverse treacherous terrain and navigate through enemy territory, you steel yourself for the battle that lies ahead.\n\n");
    DecisionTreeNode* rallyForces = new DecisionTreeNode("Rally the forces of Arvadia",false,false,"\nYou decide that the time has come to try and rally the forces of Arvadia. As you embark on this monumental task, you are filled with a sense of purpose and determination. Arvadia, once a mighty kingdom, now lies fragmented and divided, its people scattered and its power diminished. Yet you refuse to succumb to despair, knowing that hope still flickers in the hearts of its inhabitants. You travel far and wide, from village to village, castle to castle, seeking out allies and champions who will stand with you in the face of impending darkness. Along the way, you encounter tales of heroism and sacrifice, as well as tales of betrayal and treachery. Each encounter tests your resolve and challenges your leadership, but you press on, driven by the belief that united, Arvadia can rise once more to face its greatest challenge.\n\n");
    DecisionTreeNode* uncoverProphecy = new DecisionTreeNode("Uncover a hidden prophecy",false,false,"\nYou search your mind for the remnance of memories of a hidden prophecy. Deep within the recesses of your consciousness, fragments of visions and whispers stir, hinting at a prophecy shrouded in mystery and intrigue. You delve into ancient tomes and scrolls, scouring libraries and archives for clues that will unlock the secrets of the prophecy. Each discovery leads you deeper into the labyrinth of fate, as you piece together the threads of destiny that bind past, present, and future. Along the way, you encounter cryptic symbols and enigmatic passages, each holding a key to unlocking the secrets of the prophecy. Yet with every step forward, you also face the shadow of doubt and uncertainty, as the true meaning of the prophecy remains elusive and its implications unknown. Despite the challenges and dangers that lie ahead, you are determined to unravel the mystery of the prophecy and fulfill your destiny, whatever the cost may be.\n\n");

    DecisionTreeNode* infiltrateFortress = new DecisionTreeNode("Infiltrate the fortress with stealth",false,false,"\nYou make the choice to infiltrace the fortress with stealth.\nSneaking past the Goblin King's guards, you infiltrate his fortress under the cover of darkness, your footsteps silent and your presence unnoticed. With each passing moment, the tension mounts, your heart pounding in your chest as you edge closer to your target.\n\n");
    DecisionTreeNode* confrontGuards = new DecisionTreeNode("Confront the guards in a magical showdown",false,false,"\nYou make the bold decision to confront the guards in a magical showdown.\nAs you breach the fortress walls, you find yourself face to face with the Goblin King's elite guard, their eyes blazing with malice and their weapons poised for battle. With magic crackling in the air and steel ringing against steel, you engage in a fierce battle of wills and power, determined to emerge victorious against all odds.\n\n");

    DecisionTreeNode* uniteKingdoms = new DecisionTreeNode("Unite kingdoms and magical beings against the goblins",false,false,"\nDrawing upon your charisma and diplomatic prowess, you weave together a coalition of nations and magical beings, united in their determination to stand against the goblin horde. Together, you forge alliances that span across borders and species, each member of the coalition bringing their unique strengths to the table.\n\n");
    DecisionTreeNode* faceResistance = new DecisionTreeNode("Face resistance from skeptical leaders",false,false,"\nHowever, not everyone is convinced of the impending danger posed by the goblins. As you attempt to persuade skeptical leaders to join your cause, you encounter resistance at every turn. With patience and perseverance, you work tirelessly to overcome their doubts and sway them to your side, knowing that the fate of the realm hangs in the balance.\n\n");

    DecisionTreeNode* interpretProphecy = new DecisionTreeNode("Interpret the prophecy to guide your actions",false,false,"\nArmed with newfound knowledge, you interpret the prophecy to guide your actions, seeking to fulfill the ancient prophecy and bring about the downfall of the goblin king. With each step you take, you find yourself drawing closer to your destiny, the weight of the prophecy heavy upon your shoulders.\n\n");
    DecisionTreeNode* dismissProphecy = new DecisionTreeNode("Dismiss the prophecy as superstition",false,false,"\nHowever, plagued by doubt and skepticism, you choose to dismiss the prophecy as nothing more than mere superstition, placing your trust in your own abilities and judgment instead. Yet, as events unfold and the goblin threat looms ever closer, you can't help but wonder if you've made a grave mistake in ignoring the warnings of fate.\n\n");

    // Chapter 5: The Final Battle
    DecisionTreeNode* chapter5 = new DecisionTreeNode("Chapter 5: The Final Battle",true,false,"\nChapter 5: The Final Battle\n\nThe transition from the trials of Chapter 4 to the climactic confrontation of Chapter 5 is fraught with tension and anticipation. As the forces of darkness gather their strength and the fate of Arvadia hangs in the balance, you stand at the precipice of destiny, ready to face the ultimate challenge.\n\nHaving confronted the darkness that threatens to engulf the realm, you emerge from the shadows with newfound resolve. The rallying cries of allies echo in your ears, their faith in your leadership unwavering as you prepare to lead them into the heart of the coming storm.\n\nWith the forces of darkness looming on the horizon, you steel yourself for the final confrontation. The air crackles with magical energy as the battlefield stretches out before you, a landscape of chaos and carnage where the fate of the realm will be decided.\n\n");
    DecisionTreeNode* utilizeMagic = new DecisionTreeNode("Utilize mastery of elemental magic",false,false,"\nYou decide to lean on your mastery of elemental magic.\nDrawing upon your mastery of elemental magic, you prepare to engage the Goblin King in a duel of epic proportions. As the two of you clash in a whirlwind of spells and sorcery, the very fabric of reality trembles with the intensity of your power.\n\n");
    DecisionTreeNode* callAllies = new DecisionTreeNode("Call upon allies for support",false,false,"\nYou choose to call upon your allies for support in the final battle.\nTurning to your allies for support, you coordinate attacks with warriors and mages, each member of your coalition fighting with unmatched ferocity and determination. Together, you form a formidable front against the goblin horde, pushing back the darkness with every strike.\n\n");
    DecisionTreeNode* tapPotential = new DecisionTreeNode("Tap into hidden magical potential",false,false,"\nYou tap into some hidden magical potential you sense within.\nIn a desperate bid for victory, you tap into your hidden magical potential, unlocking a legendary spell that promises to banish the goblins once and for all. Yet, as the dark energies surge through you, a voice whispers in the recesses of your mind, tempting you with the promise of ultimate power.\n\n");

    DecisionTreeNode* magicalDuel = new DecisionTreeNode("Engage in a magical duel with the Goblin King", false, true,"\nYou square off against the Goblin King in a battle that will determine the fate of the realm. With every spell and incantation, the ground trembles beneath your feet as the very air crackles with arcane energy. Despite your best efforts, the Goblin King proves to be a formidable opponent, his dark magic testing your resolve to its limits. In a moment of desperation, you unleash your most powerful spell, a surge of pure energy that consumes both you and the Goblin King in a blinding flash of light. As the dust settles, you realize with horror that you have failed, and the darkness descends upon the land, plunging it into eternal despair.\n\nThe End\n");
    DecisionTreeNode* castSpells = new DecisionTreeNode("Cast powerful spells to weaken the goblin horde", false, true,"\nWith a flick of your wrist, you unleash a barrage of spells upon the goblin horde, each one more devastating than the last. Your enemies fall before you, their ranks decimated by the raw power of your magic. Yet, as the battle rages on, you begin to sense that something is amiss. With horror, you realize that your spells have only served to enrage the goblins further, driving them into a frenzy of destruction. In a last desperate attempt to stem the tide, you unleash a final, cataclysmic spell, only to be consumed by the very magic you sought to control.\n\nThe End\n");

    DecisionTreeNode* coordinateAttacks = new DecisionTreeNode("Coordinate attacks with warriors and mages", false, true,"\nWorking in tandem with your allies, you coordinate a series of devastating attacks against the goblin horde, each strike weakening their forces and bolstering your own. As the battle rages on, you draw strength from the camaraderie of your fellow warriors and mages, their unwavering loyalty fueling your determination to emerge victorious. In a final, coordinated assault, you lead your allies in a decisive charge against the heart of the goblin army, striking down the Goblin King and scattering his forces to the winds. With the realm saved and peace restored, you stand as a beacon of hope for all who dwell within its borders.\n\nThe End\n");
    DecisionTreeNode* sacrificeForGood = new DecisionTreeNode("Sacrifice for the greater good", false, true,"\nIn a moment of selflessness, you make the ultimate sacrifice for the greater good, giving your life to protect the realm from the encroaching darkness. As your allies look on in horror, you face the full might of the goblin horde alone, your bravery and sacrifice inspiring them to fight on with renewed determination. With your final breath, you unleash a burst of pure energy that engulfs the battlefield, banishing the goblins and sealing their dark lord away for eternity. Though you may be gone, your sacrifice will never be forgotten, and the realm will forever stand as a testament to your courage and valor.\n\nThe End\n");

    DecisionTreeNode* unlockSpell = new DecisionTreeNode("Unlock a legendary spell to banish the goblins", false, true,"\nChanneling the power of ancient magic, you unlock a legendary spell that promises to banish the goblins from the realm once and for all. With a whispered incantation, you unleash the full force of the spell upon the goblin horde, their ranks shattered by the sheer magnitude of your power. As the darkness recedes and the light of dawn breaks over the horizon, you stand victorious, the realm saved from the brink of destruction. With the goblins banished and peace restored, you are hailed as a hero throughout the land, your name spoken with reverence and gratitude for generations to come.\n\nThe End\n");
    DecisionTreeNode* embraceDarkness = new DecisionTreeNode("Embrace darkness for ultimate power", false, true,"\nIn a moment of weakness, you succumb to the temptation of ultimate power, embracing the darkness that lurks within your soul. With each passing moment, your humanity slips away, replaced by a hunger for power that knows no bounds. As the goblins swarm around you, you unleash a torrent of dark magic upon the land, your once noble intentions twisted into something dark and malevolent. In the end, you are consumed by the very darkness you sought to control, your legacy one of destruction and despair. The realm falls into chaos, its people doomed to an eternity of darkness and suffering.\n\nThe End\n");

    // Set up the decision tree structure
    //Start --> Chapter1 --> 3 chapter 1 decisions --> Final sub branches of chapter 1
    start->addChild(chapter1);
    chapter1->addChild(attendClasses);
    chapter1->addChild(exploreGrounds);
    chapter1->addChild(visitLibrary);
    // Attend classes branch and sub branches
    attendClasses->addChild(participateSpellcasting);
    attendClasses->addChild(joinClub);
    attendClasses->addChild(exploreLibrary);

    participateSpellcasting->addChild(chapter2);
    joinClub->addChild(chapter2);
    exploreLibrary->addChild(chapter2);
    //Explore grounds branch and sub branches
    exploreGrounds->addChild(discoverArtifact);
    exploreGrounds->addChild(encounterCreature);
    exploreGrounds->addChild(practiceSpells);

    discoverArtifact->addChild(chapter2);
    encounterCreature->addChild(chapter2);
    practiceSpells->addChild(chapter2);
    //Visit library branch and sub branches
    visitLibrary->addChild(researchTechniques);
    visitLibrary->addChild(studyHistory);
    visitLibrary->addChild(seekAdvice);

    researchTechniques->addChild(chapter2);
    studyHistory->addChild(chapter2);
    seekAdvice->addChild(chapter2);

    //chapter1->addChild(chapter2);
    chapter2->addChild(participateTournament);
    chapter2->addChild(assistProfessor);
    chapter2->addChild(undertakeQuest);

    participateTournament->addChild(winTournament);
    participateTournament->addChild(learnFromDefeat);

    winTournament->addChild(chapter3);
    learnFromDefeat->addChild(chapter3);

    assistProfessor->addChild(completeExperiment);
    assistProfessor->addChild(faceChallenges);

    completeExperiment->addChild(chapter3);
    faceChallenges->addChild(chapter3);

    undertakeQuest->addChild(navigateForest);
    undertakeQuest->addChild(solvePuzzles);
    undertakeQuest->addChild(confrontGuardians);

    navigateForest->addChild(chapter3);
    solvePuzzles->addChild(chapter3);
    confrontGuardians->addChild(chapter3);

    //chapter2->addChild(chapter3);
    chapter3->addChild(befriendAlchemist);
    chapter3->addChild(formAlliance);
    chapter3->addChild(seekGuidance);

    befriendAlchemist->addChild(receivePotions);
    befriendAlchemist->addChild(helpAlchemist);

    receivePotions->addChild(chapter4);
    helpAlchemist->addChild(chapter4);

    formAlliance->addChild(trainTogether);
    formAlliance->addChild(rescueWarrior);

    trainTogether->addChild(chapter4);
    rescueWarrior->addChild(chapter4);

    seekGuidance->addChild(learnSpells);
    seekGuidance->addChild(retrieveArtifacts);

    learnSpells->addChild(chapter4);
    retrieveArtifacts->addChild(chapter4);

    //chapter3->addChild(chapter4);
    chapter4->addChild(travelFortress);
    chapter4->addChild(rallyForces);
    chapter4->addChild(uncoverProphecy);

    travelFortress->addChild(infiltrateFortress);
    travelFortress->addChild(confrontGuards);

    infiltrateFortress->addChild(chapter5);
    confrontGuards->addChild(chapter5);

    rallyForces->addChild(uniteKingdoms);
    rallyForces->addChild(faceResistance);

    uniteKingdoms->addChild(chapter5);
    faceResistance->addChild(chapter5);

    uncoverProphecy->addChild(interpretProphecy);
    uncoverProphecy->addChild(dismissProphecy);

    interpretProphecy->addChild(chapter5);
    dismissProphecy->addChild(chapter5);

    //chapter4->addChild(chapter5);
    chapter5->addChild(utilizeMagic);
    chapter5->addChild(callAllies);
    chapter5->addChild(tapPotential);

    utilizeMagic->addChild(magicalDuel);
    utilizeMagic->addChild(castSpells);
    callAllies->addChild(coordinateAttacks);
    callAllies->addChild(sacrificeForGood);
    tapPotential->addChild(unlockSpell);
    tapPotential->addChild(embraceDarkness);

    // Set the root of the decision tree
    root = start;
}

DecisionTree::~DecisionTree() {
    // Clean up dynamically allocated memory
    delete root;
}

const std::vector<std::string>& DecisionTree::getStoryline() const {
    return storyline;
}

void DecisionTree::traverseTree(Player& player) const {
    DecisionTreeNode* currentNode = root;
    //Move from start node to first chapter before entering the loop
    if (currentNode->getText() == "start") {
        // Assuming getChildren() returns a vector of DecisionTreeNode*
        const std::vector<DecisionTreeNode*>& children = currentNode->getChildren();
        if (!children.empty()) {
            currentNode = children[0]; // Select the first child node
        }
    }

    while (currentNode != NULL) {
        
        // Display the decision text
        std::cout << currentNode->getText() << "\n";
        std::cout << currentNode->getStoryline() << "\n";
        //break point for final nodes
        if(currentNode->isFinalEnding()){
            break;
        }

        // Display the options menu
        const std::vector<DecisionTreeNode*>& children = currentNode->getChildren();
        std::cout << "What would you like to do now " << player.getName() << "?\n";
        
        for (size_t i = 0; i < children.size(); ++i) {
            std::cout << i + 1 << ". " << children[i]->getText() << "\n";
        }
        
        //testing to see if this will skip to choices after chapter
        if (!currentNode->isChapterNode()){
            currentNode = children[0];
        }
        // Get user input and navigate to the corresponding child node
        int choice;
        std::cout << "Enter your choice (1-" << children.size() << "): ";
        std::cin >> choice;
        if (choice < 1 || choice > static_cast<int>(children.size())) {
            std::cout << "Invalid choice. Please try again.\n";
        } else {
            currentNode = children[choice - 1];
        }
        
    }
}