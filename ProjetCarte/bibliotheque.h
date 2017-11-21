#pragma once


//SANG
Creature ebola("ebola", "maladie mortel", 9, 0,
"fievre ", "...", 5, 4, 4,
"perte sang", "...", 6, 2, 8);
Creature grippe("grippe", "virus commun", 2, 0,
	"fievre ", "...", 2, 4, 2,
	"eternuement", "...", 1, 4, 1);
Creature variolle("Variolle", " ", 8, 0,
	"Eruption cutané", "boutons", 2, 2, 4,
	"Fievre ardue", "Grosse fievre quoi..", 2, 2, 6);
Creature leucemie("Leucemie", "Cancer du sang", 6, 0,
	"Cancer generalise", "partout partout y a cancer", 1, 2, 6,
	"Faiblesse extreme", "c est clair", 2, 2, 7);


//MST
Creature VIH("VIH", "fleau", 1, 0,
	"suppresion de anticorps", "", 5, 1, 3,
	"sida", "", 5, 1, 8);
Creature hepatite("hepatite", "", 5, 0,  //nom,description,pv,etat
	"nausee", "", 5, 1, 2,  //nom,description,cout,type,degat
	"jaunisse", "", 5, 1, 5);
Creature chlamydiae("Chlamydiae", "Maladie fourbe", 6, 0,
	"Suppression des anti-corps", "Supprime les defenses immunitaires", 2, 1, 2,
	"Brulure", "aie aie", 1, 1, 5);
Creature papillomavirus("Papillomavirus", "Cancer probable", 7, 0,
	"Fievre", " ", 2, 1, 3,
	"Cancer du col", " ", 1, 1, 7);

//Génétique

Creature Hemophilie("Hemophilie", "Trouble de la coagulation.", 4, 0,
	"Destruction articulaire", "fragilisation des articulations", 2, 3, 4,
	"Hemoragie", "rupture d'un vaisseau sangin", 4, 3, 10);

Creature Neurofibromatose("Neurofibromatose", "Maladie orpheline touchant au systeme nerveux", 7, 0,
	"Tache cafe au lait", "Ce n'est pas une tache de rousseur", 1, 3, 2,
	"Tumeur", "dysfonctionnement du developpement cellulaire", 3, 3, 6);

Creature Mucoviscidose("Muscovicidose", "Maladie genetique/hereditaire entrainant des difficultés respiratoires", 5, 0,
	"Difficulte respiratoire", "impossible de respirer", 2, 3, 4,
	"Difficulte de digestion", "impossible de digerer tranquillement", 3, 3, 6);

Creature Drepanocytose("Drepanocytose", "Maladie genetique altérant l'hemoglobine", 6, 0,
	"Alteration de l'hemoglobine", "la respiration risque d'etre complique", 2, 3, 3,
	"Mutation du gene", "Ca peut toujours empirer", 3, 3, 5);

//Salive

Creature Mononucleose("Mononucleose", "La douce maladie du baiser", 6, 0,
	"Fatigue intense", "Le sommeil est recommandé", 2, 4, 3,
	"Mal de gorge", "Le miel, ca peut aider", 3, 4, 5);

Creature Polio("Polio", "paralysie spinale infantile", 4, 0,
	"Fievre", "Des medocs sont recommandes", 1, 4, 3,
	"Paralysie", "Tu es cloue au sol", 2, 4, 4);

Creature Oreillons("Oreillons", "Tu as des pomettes... en plus gros... et plus douloureux.", 7, 0,
	"Fievre", "Des medocs sont recommandes", 1, 4, 3,
	"Oreille douloureuse", "Juste un mauvais moment a passer", 3, 4, 5);

Creature Meningite("Meningite", "inflammation du systeme nerveux", 3, 0,
	"Fievre", "Des medocs sont recommandes", 1, 4, 3,
	"Raideur", "Vous pouvez enfin faire la planche", 2, 4, 4);




//SALIVE

Energie gene("facteur genetique", "transmition hereditaire", 3, 30);//nom,description,type,nbre de point
Energie sang("facteur sanguin", "contagion par la mise en contact de 2 sang", 3, 20);
Energie mst("facteur sexuel", "contagion par rapport sexuel", 3, 10);