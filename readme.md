# DEA : Dynamic Eagle Animatronic
> Présentation du projet, cahier des charges, état de l'art, etc...

Depuis la Grêce antique et le mythe du géant de bronze Talos les hommes ont toujours cherchés à créer des automates avec les moyens à leur disposition. Les animatroniques sont l'achèvement actuel de ce désir. Ce sont des poupées mécaniques plus ou moins réalistes dont le fonctionnement interne fait intervenir autant de la mécanique que de l'électronique.
Elles sont depuis plusieurs décennies et encore aujourd'hui principalement utilisées dans le domaine du divertissement au travers des parcs d'attraction, des films et des séries.

Dans le cadre d'un projet de 1ère année à l'école d'ingénieur ENSEA supervisé par (@)M.Papazoglou nous allons créer créer une animatronique d'aigle en 10 séances de 4h. Cet animatronic sera
capable d'ouvrir et de rabattre ses ailes, d'ouvrir et de fermer ses paupières, d'ouvrir et de fermer son bec, de pivoter sa tête (optionnel). Ces mouvements seront commandés par
l'appui de différents boutons.

<table>
  <tr>
    <td><img src="GestionProjet/Cahier_des_charges.png" alt="Cahier des charges" width="500" height="700"></td>
    <td><img src="GestionProjet/Diagramme_architecture.drawio.png" alt="Diagramme d'architecture" width="500" height="700"></td>
  </tr>
</table>

  [Cahier des charges](https://github.com/mael-lukas/2324_Projet1AB_Animatronic/blob/main/GestionProjet/Cahier_des_charges.png)    
  [Diagramme d'architecture](https://github.com/mael-lukas/2324_Projet1AB_Animatronic/blob/main/GestionProjet/Diagramme_architecture.drawio.png)

# Equipe
Membres de l'équipe : 
* #### Vincent Fernandes
    * [Github](https://github.com/FernandesVincent)
    * [Linkedin](https://www.linkedin.com/in/vincent-fernandes-0981552a6/)
* #### Maël Lukas
    * [Github](https://github.com/mael-lukas)
    * [Linkedin](https://www.linkedin.com/in/mael-lukas/)
* ##### Romane Ponthieu
    * [Github](https://github.com/Romanepnth)
    * [Linkedin](https://www.linkedin.com/in/romane-ponthieu/)
* #### Marie Ceccaldi
    * [Github](https://github.com/mariececcaldi1)
    * [Linkedin](https://www.linkedin.com/in/marie-ceccaldi-887616300/)
* #### Sedrenn Labrousse
    * [Github](https://github.com/Sedrennl)
    * [Linkedin](https://www.linkedin.com/in/sédrenn-labrousse-24b2a5295/)
> Rajouter les liens vers vos linked in, github, etc...

# Journal de bord
> Déroulé séance par séance

## Séance 1
   Cette séance, étant la première, nous a servit à définir notre projet au travers de la création d'une première version d'un cahier des charges et d'un diagramme d'architecture. Afin de nous organiser au mieux au vu du temps disponible à la création de ce projet nous nous sommes directement répartit différentes tâches à réaliser durant les semaines qui suivent.
   * #### modélisation 3D de l'aigle
        * [Sedrenn](https://github.com/mael-lukas/2324_Projet1AB_Animatronic/tree/main?tab=readme-ov-file#sedrenn-labrousse)
   * #### programmation des moteurs
        * [Maël](https://github.com/mael-lukas/2324_Projet1AB_Animatronic/tree/main?tab=readme-ov-file#ma%C3%ABl-lukas)
   * #### création des différents PCB
        * [Romane](https://github.com/mael-lukas/2324_Projet1AB_Animatronic/tree/main?tab=readme-ov-file#romane-ponthieu)
        * [Marie](https://github.com/mael-lukas/2324_Projet1AB_Animatronic/tree/main?tab=readme-ov-file#marie-ceccaldi)
        * [Vincent](https://github.com/mael-lukas/2324_Projet1AB_Animatronic/tree/main?tab=readme-ov-file#vincent-fernandes)

## Séance 2
   Durant cette séance nous avons affiné notre cahier des charges et notre diagramme d'architecture disponible ci-dessous:

   Nous en avons déduis la nécessité d'avoir un minimum de 2 PCB afin de réaliser notre animatronique, le principal qui contiendrait le microprocesseur ainsi que différents connectiques tandis que le secondaire incorporerai principalement en son sein tout les régulateurs de tension nécessaire à l'actionnment des moteurs. [PCB](https://github.com/mael-lukas/2324_Projet1AB_Animatronic?tab=readme-ov-file#pcb)
   Pendant ce temps, [Sedrenn](https://github.com/mael-lukas/2324_Projet1AB_Animatronic/tree/main?tab=readme-ov-file#sedrenn-labrousse) et [Maël](https://github.com/mael-lukas/2324_Projet1AB_Animatronic/tree/main?tab=readme-ov-file#ma%C3%ABl-lukas)
 se sont chargés de la commande des différents composants dont nous ne disposions pas à l'école.
   
## Séance 3
   À cette étape du projet nous avons choisis de créer un nouveau [PCB](https://github.com/mael-lukas/2324_Projet1AB_Animatronic/tree/main?tab=readme-ov-file#yeux) dans le but de pouvoir placer les LED RGB au plus proches des yeux de d'aigle. Ce PCB sera donc utilisé deux fois, un pour chaque oeil.
   En parallèle à cela, nous nous sommes penchés sur la réalisation d'un socle dont le but est d'accueillir le [PCB principal](https://github.com/mael-lukas/2324_Projet1AB_Animatronic/tree/main?tab=readme-ov-file#corps) ainsi que l'alimentation tout en permettant de poser l'aigle sur celui-ci pour y connecter l'ensemble des câbles.
   
   Détermination du besoin d'un nouveau PCB pour pouvoir palcer des LED RGB au niveau des yeux de l'aigle.
   Détermination d'un socle 
   
## Séance 4
   Cette séance a permis la finalisation des schematic des 3 [PCB](https://github.com/mael-lukas/2324_Projet1AB_Animatronic?tab=readme-ov-file#pcb) crées sous Kicad et ainsi le passage à l'étape PCB editor pour les membres affectés à cette partie du projet.
   Pendant ce temps [Maël](https://github.com/mael-lukas/2324_Projet1AB_Animatronic/tree/main?tab=readme-ov-file#ma%C3%ABl-lukas) a finalisé une première version du code des petits moteurs et [Sedrenn](https://github.com/mael-lukas/2324_Projet1AB_Animatronic/tree/main?tab=readme-ov-file#sedrenn-labrousse) a trouvé le modèle 3D d'un aigle qui servira de base pour notre projet.
   
## Séance 5
   Au cours de ces 4 heures M.Papazoglou a pu vérifier les 3 [PCB](https://github.com/mael-lukas/2324_Projet1AB_Animatronic?tab=readme-ov-file#pcb) et nous faire des retours pour que l'on puisse faire les dernières retouches pour ensuite pouvoir passer la commande.
   
   À ce moment là dans l'avancée du projet, toutes les réalisations énoncées à la séance 1 ont pu avancer comme il ce doit. Les pcb étaient en phase de finalisation, la programmation des moteurs a permis la commande d'un petit moteur tandis que les moteurs XL430 voyaient leur fichiers header être terminés. Finalement, la modélisation 3D...

## Séance 6
   Au cours de cette séance nous avons reçu les commandes de composants faites durant la séance 2 ainsi que les PCB qui ont donc pu être soudés par [Marie](https://github.com/mael-lukas/2324_Projet1AB_Animatronic/tree/main?tab=readme-ov-file#marie-ceccaldi) et [Romane](https://github.com/mael-lukas/2324_Projet1AB_Animatronic/tree/main?tab=readme-ov-file#romane-ponthieu) durant ces 4 heures.
   En parralèle à cela, [Sedrenn](https://github.com/mael-lukas/2324_Projet1AB_Animatronic/tree/main?tab=readme-ov-file#sedrenn-labrousse) a finalisée la première version de la tête de l'aigle en y incluant les moteurs et PCB associés, [Vincent](https://github.com/mael-lukas/2324_Projet1AB_Animatronic/tree/main?tab=readme-ov-file#vincent-fernandes), quant à lui, à réalisé un premier prototype du socle réfléchit à la [Séance 3](https://github.com/mael-lukas/2324_Projet1AB_Animatronic?tab=readme-ov-file#s%C3%A9ance-3)
   Mael == vidéo moteur
   
## Séance 7
   Durant cette séance, [Marie](https://github.com/mael-lukas/2324_Projet1AB_Animatronic/tree/main?tab=readme-ov-file#marie-ceccaldi) et [Romane](https://github.com/mael-lukas/2324_Projet1AB_Animatronic/tree/main?tab=readme-ov-file#romane-ponthieu) ont crées le modèle 3D d'un cache pour l'alimentation, tandis que [Sedrenn](https://github.com/mael-lukas/2324_Projet1AB_Animatronic/tree/main?tab=readme-ov-file#sedrenn-labrousse) a imprimée une première version de la tête de l'aigle. [Vincent](https://github.com/mael-lukas/2324_Projet1AB_Animatronic/tree/main?tab=readme-ov-file#vincent-fernandes), pour sa part, a entammé la rédaction du fichier readme.md en markdown et en HTML.
   Création d'un modèle 3D d'un cache pour l'alimentation
   Impression d'une première version de la tête
   
## Séance 8
   Au cours de cette séance, [Marie](https://github.com/mael-lukas/2324_Projet1AB_Animatronic/tree/main?tab=readme-ov-file#marie-ceccaldi) et [Romane](https://github.com/mael-lukas/2324_Projet1AB_Animatronic/tree/main?tab=readme-ov-file#romane-ponthieu) ont finalisées le modèle 3D du cache entammé à la séance précédente, puis l'ont imprimé. Au même moment [Maël](https://github.com/mael-lukas/2324_Projet1AB_Animatronic/tree/main?tab=readme-ov-file#ma%C3%ABl-lukas) a mis au propre [l'architecture du code](https://github.com/mael-lukas/2324_Projet1AB_Animatronic?tab=readme-ov-file#code)
   Impression 3D d'un cache pour l'alimentation.
   Mise au propre de l'Architecture du code.
   
## Séance 9

## Séance 10
   Démonstration, bilan, rapport
   
# Livrables
## PCB
> Présentation du schéma (grandes lignes) + PCB

Ci-dessous les schematic et PCB editor des 3 PCB nécessaires à la réalisation du DEA:

#### Corps

Ce PCB est le PCB principal contenant le microprocesseur ainsi que les connecteurs et les bouttons utiles à l'utilisateur.

<table>
  <tr>
    <td><img src="Hardware/PCB/screenshots/schematic corps.png" alt="schematic corps" width="600" height="400"></td>
    <td><img src="Hardware/PCB/screenshots/PCB_editor_corps.png" alt="PCB editor corps" width="500" height="400"></td>
  </tr>
</table>

[Schematic](https://github.com/mael-lukas/2324_Projet1AB_Animatronic/blob/main/Hardware/PCB/screenshots/schematic%20corps.png)         
[PCB editor](https://github.com/mael-lukas/2324_Projet1AB_Animatronic/blob/main/Hardware/PCB/screenshots/PCB_editor_corps.png)

#### Tête

Ce PCB sert à réguler les tension envoyés aux moteurs et contient également le LED driver qui permet de commander les LED présentes sur le [PCB des yeux](https://github.com/mael-lukas/2324_Projet1AB_Animatronic/tree/main?tab=readme-ov-file#yeux).

<table>
  <tr>
    <td><img src="Hardware/PCB/screenshots/schematic tête.png" alt="schematic tête" width="600" height="400"></td>
    <td><img src="Hardware/PCB/screenshots/PCB editor tête.png" alt="PCB editor tête" width="500" height="400"></td>
  </tr>
</table>

[Schematic](https://github.com/mael-lukas/2324_Projet1AB_Animatronic/blob/main/Hardware/PCB/screenshots/schematic%20t%C3%AAte.png)   
[PCB editor](https://github.com/mael-lukas/2324_Projet1AB_Animatronic/blob/main/Hardware/PCB/screenshots/PCB%20editor%20t%C3%AAte.png)

#### Yeux

Ce PCB, utilisé deux fois dans le DEA (un pour chaque oeil) à pour unique utilité de placer les LED au plus proche des yeux grâce à un connecteur qui le relie au [PCB de la tête](https://github.com/mael-lukas/2324_Projet1AB_Animatronic/tree/main?tab=readme-ov-file#t%C3%AAte).

<table>
  <tr>
    <td><img src="Hardware/PCB/screenshots/schematic eye.png" alt="schematic oeil" width="600" height="250"></td>
    <td><img src="Hardware/PCB/screenshots/PCB editor eye.png" alt="PCB editor oeil" width="500" height="250"></td>
  </tr>
</table>

[Schematic](https://github.com/mael-lukas/2324_Projet1AB_Animatronic/blob/main/Hardware/PCB/screenshots/schematic%20eye.png)        
[PCB editor](https://github.com/mael-lukas/2324_Projet1AB_Animatronic/blob/main/Hardware/PCB/screenshots/PCB%20editor%20eye.png)

## Code
> Architecture de votre code

## Rendu final
> Video ici de votre projet


