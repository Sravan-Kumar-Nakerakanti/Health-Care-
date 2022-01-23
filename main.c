#include <stdio.h>

int main() {
    printf("Part A: Gives brief details of the number you enter of your choice from any following bracket\n\n");
    printf("Part B: Input the sympomts and get the most probable output\n\n");
    printf("Part C:Gives tips and advices of the following you enter\n\n\n");
    char a;
    printf("ENTER a FOR PART A\n");
    scanf("%s",&a);
    printf("PART A:");
    printf("Loose Motion(1)\t\t");
    printf("Ache's(2)\t");
    printf("cough&cold(3)\t");
    printf("Fever(4)\t");
    printf("Body pains(5)\n\n");
    printf("cuts(6)\t\t");
    printf("constipation(7)\t\t");
    printf("eye strain(8)\t");
    printf("Rashes(9)\n\n");
    printf("overweight and obesity(10)\t\t\n\n");
    printf("A\n");
    printf("Abdominal Pain(11)\nAsthma(12)\nArthritis (joint pain)(13)\nAllergies(14)\nAppendicitis(15)\n\n");
    printf("B\n\n");
    printf("C\n");
    printf(" Cough(16)\nCold(17)\nChest pain(18)\nChronic back pain(19)\nConstipation(20)\n\n");
    printf("D\n");
    printf("Diabetes(21)\ndengue(22)\nDog bites(23)\nDiarrhea(24)\n\n");
    printf("E\n");
    printf("Ear infection(25)\nEye pain(26)\nEpidemic diseases(27)\nEar ache(28)\nElbow sprain(29)\n\n");
    printf("F\n");
    printf("Fever(30)\nFood allergy(31)\nFatigue(32)\nFrozen shoulder(33)\nFungal infections(34)\n\n");
    printf("G\n");
    printf("Gastric(35)\nGonorrhea(36)\n\n");
    printf("H\n");
    printf("Head ache(37)\nHigh blood pressure(38)\nHeart disease(39)\nHigh cholesterol(40)\n\n");
    printf("I\n");
    printf("Insect bites(41)\nInfluenza(42)\n\n");
    printf("J\n");
    printf("Jaw pain(43)\nJoint infection(44)\n\n");
    printf("K\n");
    printf("Knee pain(45)\n\n");
    printf("L\n");
    printf("Leg pain(46)\n\n");
    printf("M\n");
    printf("Malaria(47)\nMeasles(48)\nMigraine(49)\nMucormycosis(50)\nMyopia(Minor injuries)(51)\nMuscular dystrophy(52)\n\n");
    printf("N\n");
    printf("Narcolepsy(53)\nNoise induced hearing    loss(54)\nNut allergy(56)\nNoma(57)\nN syndrome(58)\n\n");
    printf("O\n");
    printf("Obesity(59)\nOCD(obsessive compulsive disorder)(60)\nOvarian cancer(61)\nOsteoarthritis(62)\n\n");
    printf("P\n");
    printf("Plantar fasciitis(63)\nPCOS/PCOD(64)\nPrenatal depression(65)\nPandemic flu(66)\nParasitic diseases(67)\n\n\n");
    printf("Q\n");
    printf("Q fever.(68)\nQuadriceps sparing myopathy.(69)\nQuadriceps tendon rupture.(70)\nQuadriparesis.(71)\nQuadriplegia.(72)\n\n");
    printf("R\n");
    printf("Rabies(73)\nRenal calculi(74)\nReno vascular disease(75)\nRespiratory infection(76)\nRheumatoid arthritis(77)\n\n");
    printf("S\n");
    printf("Swine flu(78)\nSalmonellosis(79)\nScombroid fish poisoning(80)\nShigellosis(81)\nSmallpox(82)\nSyphilis(83)\n\n");
    printf("T\n");
    printf("Tuberculosis(84)\nTetanus(85)\nTonsillitis(86)\nTyphoid(87)\nTularemia(88)\n\n");
    printf("U\n");
    printf("Ulcers(89)\nUrinary tract infection(90)\nUmbilical hernia(91)\nUrination Pain(92)\nUndulant fever(93)\n\n");
    printf("V\n");
    printf("Vaginal and Vulvar Cancers.(94)\nVaginal Candidiasis - see Genital Candidiasis.(95)\nValley Fever [Coccidioidomycosis](96)\nVancomycin-Intermediate(97)\nResistant Staphylococcus aureus Infections [VISA/VRSA](98)\nVancomycin-resistant Enterococci Infection (VRE)(98)\n\n");
    printf("W\n");
    printf("Whipworm Infection [Trichuriasis](99)\nWhitmore's Disease — see Melioidosis.(100)\nWhooping Cough — see Pertussis (Whooping Cough)(101)\nWhooping Cough (Pertussis) Vaccination.(102)\nWildlife Infections .(103)\n\n");
    printf("X\n\n");
    printf("Y\n");
    printf("Yellow Fever(104)\n\n");
    printf("Z\n\n");
    printf("ENTER 21 TO SKIP PART A\n\n");
    int n;
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        printf(" Loose Motion\n1) Loperamide\n2) Rs.102/per 10 tablets.\n3) hot eveals, plain white vice, bread, boiled potatoes.\n4) keep Ginger tea, lemon and salt water\n");
        break;
        case 2:
        printf("Ache's\nstomach ace\n1) Promethazine theolate.\n2) Rs.240 -10 tablets\n3) Bananay apple souse\n4) Bitters and Soda, Pepper mint\nhead ache\n1) Acetaminophen\n2) Rs.61 - 10 tablets leafy greens,nuts, fatty fish , seeds.\n4) Try Not to Chew, Use a heating pad on head, dim the lights.\n");
        break;
        case 3:
        printf("Cough & cold;\n1) Chlorpheniramine, Robafen Cough\n2) Rs.60 -12 tablets\n 3) Spicy foods, Garlic, Coconut water, Hot tea.\n4) Stay hydrated, Try honey, sip warm liquids, Add moisture to air.\n");
        break;
        case 4:
        printf("Fever's\n1) Paracelemol\n2) Rs.30- 15 tablets\n3) Greek Yoguet, Vegetables, Fruits wet\n4) keep cloth on head & stomache, Drink lot of water.\n");
        break;
        case 5:
        printf("Body pain\n1) Diclofenac\n2) Rs.221-10 tablets\n3) Salmon, Pumpkin Seeds, Turmeric,Chilli Peppers\n4) Do cold therapy, Pip in a warm sal solution, Drink Cherry Juice.\n");
        break;
        case 6:
        printf("Cuts\n1) Bandage, Pramoxine Cream\n2) Rs.20 Cream\n3) Protein foods, fruits, vegetables, milk, grains.\n4) Wash the cut to prevent infection, Don't cover cut area, use bandages\n");
        break;
        case 7:
        printf("Constipation\n1) Dulcolax laxative\n2) Rs.11 - 10 tablets\n3) Apples, Kiwi, spirach & other greens, Rhubarb \n4) Drink more water, Eat more liber, Try avoiding Diary, Exercise\n");
        break;
        case 8:
        printf("Eye stain\n1) Optive lubricant Eye Drops\n2) Rs.121 - 10ml of Bottle.\n3) Fish, Nuts & legumes, Seeds, leafy vegetables, Carrots, sweet potatoes.\n4) took away frequently, Reduce digitals screens, Reduce time spent on a single activity.\n");
        break;
        case 9:
        printf("Skin Rashes\n1) Predisone tablet\n2) Rs.192 Box\n3) fruits, vegetables, whole grains, healthy fats, fish. 200\n4) Moisturize your skin, Apply cold, wet cloth or ice pack to skin, Avoid Scratchy materials (like wool).\n");
        break;
        case 10:
        printf("Overweight and Obesity\n1) Orlistat tablet\n2) Rs.170 - total pack\n3) whole grains, Nuts & seeds, Calorie free foods,  Plant oils, Potatoes.\n4) consume less bad fat, Eat plenty of dietary fiber, Focus on eating low.\n");
        break;
        case 11:
        printf("Abdominal pain\n1) Aludrox tablet\n2) Rs.75/per 10 tablets\n3) Rice, oatmeal and toast\n4) Drink plenty of water, reduce intake of coffee and tea, take ant-acid medication\n5) Don’t overeat, avoid fatty foods, Don't eat right before bedtime\n");
        break;
        case 12:
        printf("Asthma\n1) Albuterol tablet\n2) Rs.115/per 30 tablets\n3) Rich vegetables and leafy vegitables\n4) Drink milk, avoid smoking, keep in fit\n5) Don’t thing viral, learn how to use inhaler, get enough sleep\n");
        break;
        case 13:
        printf("Arthritis (joint pain)\n1) Anti arthritis capsule\n2) Rs.180/per 40 capsules\n3) Green tea, salmon, whole grains, fruits\n4) Stay active and keep fit, maintain healthy weight\n5) Rest when you need, keep your joints moving, avoid running and jumping\n");
        break;
        case 14:
        printf("Allergies\n1) Desloratadine\n2) Rs.35/per 10 tablets\n3) Ginger, citrus fruits, turmeric, tomatoes\n4) Enjoy outdoors on rainy and windless days\n5) Avoid touching face and especially eyes\n");
        break;
        case 15:
        printf("Appendicitis\n1) Cefepime\n2) Rs.150/per 5 tablets\n3) Oats or wheat gram over breakfast cereals, fresh fruits for desserts\n4) Avoid fried foods, quit alcohol, avoid cakes and pastries\n5) Do not eat, drink, or use any pain remedies, antacids, laxatives, or heating pads, which can cause an inflamed appendix to rupture.\n");
        break;
        case 16:
        printf("Chest pain\n1) Amlodipine\n2) Rs.15/per  12 tablets\n3) Leafy vegetables, whole grains and berries, fatty fish and fish oil\n4) Eat almonds, take hot drinks, eat garlic, lie down when pain increase\n5) Maintain healthy diet, avoid drinking and smoking\n");
        break;
        case 17:
        printf("Dengue\n1) Acetaminophen\n2) Rs.100/per 10 tablets\n3) Eat beans, chickpeas, lentils, peas, fruits, milk and diary products\n4) Drink plenty of water, take rich in proteins and iron food\n5) Don’t let water stand, use mosquito killer, wear full clothes, boost your immunity\n");
        break;
        case 18:
        printf("Diabetes\n1) Gliclazide\n2) Rs.60/per 28 tablets\n3) Fatty fish, leafy green vegetables, eat avocados\n4) Take carbohydrates food, eat less salt, check your blood sugar regularly\n5) Avoid eating sugar, Avoid Sedentary Behaviors, take high fiber diet\n");
        break;
        case 19:
        printf("Dog bites\n1) Zuvirab anti rab injection\n2) Rs.349/ per 1 injection\n3) Eat vegetables, fresh fruits\n4) Avoid eating non veg, avoid eating milk, tomatoes and potatoes\n5) Anti-rabies serum should be given if the bite is close to the spinal cord or neck, Rinse the wound with water and soap\n");
        break;
        case 20:
        printf("Ear infection\n1) Clavam\n2) Rs.175 /per 10 tablets\n3) Bananas, Lentils, peas, and beans, garlic\n4) Use prescription ear drops to relieve pain, avoid sleeping on affected ear\n5) Keep your ears clean by washing them and using a cotton swab carefully, don’t smoke\n");
        break;
        case 21:
        printf("Elbow sprain\n1) Ibuprofen\n2) Rs.60/per 10 tablets\n3) Eat fatty acids, nuts and seeds, garlic and root vegetables\n4)	Rest your elbow, Ice your elbow for 15 to 20 minutes at a time, 3 to 4 times a day\n5) Don’t take medicines expect doctor was prescribed\n");
        break;
        case 22:
        printf("Food allergy\n1) Benadryl\n2) Rs.100/perbox\n3) Ginger, bee pollen, tomatoes\n4) Don’t eat past 2 days food, take fresh food\n5) Avoid Contaminating Your Food Supply, always read labels and take care when cooking\n");
        break;
        case 23:
        printf("Fatigue\n1) Modafinil\n2) Rs.75/per 10 tablets\n3) Eat unprocessed foods, non - caffeinated beverages, lean proteins\n4) Eat balanced diet, drink more water, get good sleep\n5) Be careful with caffeine, don’t skip meals, eat iron rich foods\n");
        break;
        case 24:
        printf("Fungal infections\n1) Fluconazole\n2) Rs.150/per sheet\n3) Eat low sugar diet, garlic, curcumin\n4) keep your skin clean, wash your hands often\n5) Avoid using other people's towels and other personal care products, keep surroundings clean\n");
        break;
        case 25:
        printf("Gastric\n1) Pantoprazole\n2) Rs.130/per 15 tablets\n3) Milk, yogurt, and low fat cheeses, and eat carrots, spinach, and zucchini\n4) Eat smaller but more frequent meals, quit smoking\n5) Manage your stress, Consume less irritating food\n");
        break;
        case 26:
        printf("Gonorrhea\n1) Azithromycin\n2) Rs.70/per 3 tablets\n3) Eat garlic, apple cider vinegar\n4) Antibiotics are the only proven way to reliably treat and cure gonorrhea\n5) Avoid sex, Consider regular gonorrhea screening\n");
        break;
        case 27:
        printf("High blood pressure\n1) Labetalol\n2) Rs.128/per 10 tablets\n3) Eat citrus fruit, Swiss chard, pumpkin seeds, berries\n4) Exercise regularly, Eat a healthy diet, reduce your stress\n5) Avoid sodium in your diet, avoid caffeine\n");
        break;
        case 28:
        printf("Knee pain\n1) Cart fit\n2) Rs.399/per 30 tablets\n3) Eat nuts and seeds, use olive oil in food, eat whole grains\n4) Take rest and ice it, apply heat pack, keep your leg on pillow\n5) Do low impact exercise, don’t decrease your daily activity\n");
        break;
        case 29:
        printf("Malaria\n1) Atovaquone and proguanil\n2) Rs.100/per 12 tablets\n3) Eat cereals, pulses, vegetables, fruits, milk and milk products\n4) Use mosquito killer, be in closed room\n5) Wear full clothes on body, spray the room that can kill the mosquitoes\n");
        break;
        case 30:
        printf("Muscle pain\n1) Baclofen\n2) Rs.82/per 60 tablets\n3) Tart cherry juice, watermelon and watermelon juice, pomegranate juice\n4) Do some Gentle stretching, keep ice to help reduce inflammation\n5) Don’t do heavy exercise and heat up in pain area\n");
        break;
        default:
        printf("we are still working to provide more data \n");
        break;
        }
        printf("ENTER b FOR PART B\n ");
        char b;
        scanf("%s",&b);
        printf("Part B:Enter the integer particularly\n if more than one than enter that number also for example if 1 and 12 then inout 112 (ascending order)\n\n");
        printf("Part B:");
        printf("fever(1)\t\t");
        printf("sore throat(2)\t\t");
        printf("fatigue(3)\t");
        printf("weight loss(4)\t");
        printf("night sweats(5\t\n\n");
        printf("infections(6)\t");
        printf("unusual bleeding(7)\t");
        printf("difficulty in swallowing,urination(8)\t\n\n");
        printf("unusual or unexplained fevers(9)\t");
        printf("nagging cough(10)\t\n\n");
        printf("thickening or lump in the breast(11)\t");
        printf("waxy lump on face & neck(12)\t\n\n");
        printf("blood tinged(13)\t");
        printf("loss of muscle,muscle aches(14)\t");
        printf("shortness of breath(15\t\n\n");
        printf("weakness(16)\t");
        printf("Blurred vision(17)\t");
        printf("excessive thirst or urination(18)\t\n\n");
        printf("runny nose and watery eyes(19)\t");
        printf("headache,chills(20)\t\n\n");
        printf("enter 100 for Part C\n");
        int m;
        scanf("%d",&m);
        switch(m)
        {
            case 119:
            printf("you probably have MEASLES\n");
            break;
            case 131419:
            printf("you probably have flu\n");
            break;
            case 341718:
            printf("you probably have diabetes\n");
            break;
            default:
            printf("you probably have more than one health suffering\n we are working to produce proper output\n");
            break;
        }
        char c;
        printf("ENTER c FOR PART C\n");
        scanf("%s",&c);
        printf("Welcome to Part c:");
        printf("This will help you in daily life\n\n");
        printf("Pregnancy(1)\tMenstruation peroid(2)\tFoods for Vitamin A,B,C,D(3)\tVegetables and uses(4)\tMastrubation(5)\tDisadvantages of phone misuse(6)\tAnger,calmness & Patience(7)\tFood for controlling Fat(8)\tExercising tips & advantages(9)\tDaily health tips(10)\n\n");
        int s;
        scanf("%d",&s);
        switch(s)
        {
            case 1:
            printf("1.Pregnancy\nTake a prenatal vitamin.\nExercise regularly.\nWrite a birth plan.\nEducate yourself.Change your chores (avoid harsh or toxic cleaners, heavy lifting)\nTrack your weight gain (normal weight gain is 25-35 pounds)\nGet comfortable shoes.\nEat folate-rich foods (lentils, asparagus, oranges, fortified cereals)");
            break;
            case 2:
            printf("2.Mensuration period\nUse a heating pad on your lower abdomen or lower back.\nTake a warm bath.\nPlace a hot water bottle on lower abdomen or lower back.\nMassage your abdomen.\nAsk your doctor about using an over-the-counter pain reliever or anti-inflammatory drug.");
            break;
            case 3:
            printf("3.Foods for vitamin A,B,C,D\nFoods rich in vitamin A\ncarrots,sweet potatoes,winter squash,cantaloupe,apricots,spinach, kale, and collard greens\n\nFoods rich in vitamin B\nmeat, poultry, and fish,seafood, including mussels and oysters,eggs,milk\n\nFoods rich in vitamin C\npapaya,citrus fruits,strawberries,bell peppers,broccoli,Brussels sprouts,dark leafy greens, such as kale, mustard greens, and chard\n\nFoods rich in vitamin D\nsome seafood, such as salmon, herring, catfish, trout, and oysters,milk,eggs,take mushrooms.");
            break;
            case 4:
            printf("4.Vegetables and their uses\n\nSpinach is rich in antioxidants that may reduce the risk of chronic disease, as it may reduce risk factors such as high blood pressure.\n\nCarrots are especially high in beta-carotene, which can turn into vitamin A in the body. Their high antioxidant content may help reduce the risk of lung and prostate cancer.\n\nBroccoli is a cruciferous vegetable that contains sulforaphane, a compound that may prevent cancer growth. Eating broccoli may also help reduce the risk of chronic disease by protecting against oxidative stress.\n\ngarlic may help lower blood triglyceride levels. Some studies have also found that it could decrease blood sugar levels and may have an anti-cancer effect, although more research is needed.\n\nBrussels sprouts contain an antioxidant called kaempferol, which may protect against oxidative damage to cells and prevent chronic disease. They may also help enhance detoxification in the body.\n\nGreen peas contain a good amount of fiber, which helps support digestive health. They also contain plant compounds called saponins, which may have anti-cancer effects.\n\nginger could reduce nausea and alleviate inflammation. Ginger supplements may also help decrease blood sugar.");
            break;
            case 5:
            printf("5.Advantages and disadvantages of masturbation\n\nAdvantages\nrelieve built-up stress,sleep better,boost your mood,relax,feel pleasure,relieve cramps,release sexual tension,have better sex,better understand your wants and needs\n\nDisadvantages\nAddiction ,weakness,Fatigue,Early ejaculation,May inhibit sexual activities with your partner.");
            break;
            case 6:
            printf("6.Disadvantages of using phone for a long time\n\nMobile phones cause isolation in people.Excessive usage of mobile phones causes wastage of valuable time.Addiction to mobile phones causes distraction from works.Wastage of too much money is also caused due to mobile phones.Mobile phones cause cyberbullying.Mobile Phone Security Issues.Brain cancer.Weaks immune.Increase in stress level.");
            break;
            case 7:
            printf(" 7.Anger disadvantages\n\nheadache.digestion problems, such as abdominal pain.insomnia.increased anxiety.depression.high blood pressure.skin problems, such as eczema.heart attack.\n\n Calm advantages\nYou feel more in control of your emotions and your life.Increased breathing capacity.You can hear your own thoughts.Rediscover your creative flow.You have clearer communication.Enjoy better health");
            break;
            case 8:
            printf("Food for controlling fat\n\nFatty fish,MCT oil,Coffee,Eggs,Green Tea,Wheet Protein, Apple Cider Vinegar,Chili Peppers.");
            break;
            case 9:
            printf(" Exercising tips and advantages\n\nAdvantages\nExercise controls weight.Exercise can help prevent excess weight gain or help maintain weight loss. ...\nExercise combats health conditions and diseases. ...\nExercise improves mood. ...\nExercise boosts energy. ...\nExercise promotes better sleep. ...\nExercise puts the spark back into your sex life. ...\nExercise can be fun … and social!\n Exercising Tips\n\nExercise with a friend. ...\nKeep it brisk. ...\nMove your feet before you eat. ...\nTry a pedometer. ...\nTurn off the TV, computer, and smart phone. ...\nTurn sit time into fit time. ...\nSign up for a class.\nPiece your workout together. You don't need to get all your exercise at one time. .\n");
            break;
            case 10:
            printf(".Daily health tips\n\nEat a healthy diet.\nConsume less salt and sugar.\nReduce intake of harmful fats.\nAvoid harmful use of alcohol.\nDon't smoke.\nBe active.\nCheck your blood pressure regularly.\nGet tested\nDrink only safe water\nGet vaccinated\nPrevent mosquito bites by using mosquito nets\nClean your hands properly\nTalk to someone you trust if you're feeling down\nAvoid ultra processed foods\nExercise daily\nHave a good sleep\n");
            break;
            default:
            printf("we are working to provide more data ");
            break;
        }
    return 0;
}
