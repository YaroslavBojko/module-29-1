Задача 1. Суперпёс
Возьмём решение из видео. Все наши животные могут мяукать и гавкать, то есть издавать звуки в соответствии со своим классом. Но что, если нужно добавить им новое поведение, например, научить плавать или стоять на задних лапах. Рассмотрим класс Dog: все собаки умеют лаять и бегать, а некоторые собаки умеют хорошо плавать. Чтобы добавить эти качества классу Dog, мы можем создать ещё один класс «плавающих» животных и наследовать от него наш класс. Но что, если не все собаки умеют хорошо плавать, а некоторые из них совсем не умеют плавать.Наша задача — построить класс Dog таким образом, чтобы к его объектам можно было выборочно добавлять новые умения, но при этом не менять поведение основного класса. Список умений будет вызываться с помощью метода show_talents().

Что нужно сделать
Создайте класс Dog, к которому можно добавлять новые способности.
Создайте абстрактный класс «Талант» (Talent), от которого будут наследоваться все добавляемые способности. Пока таких способностей три: умение плавать (Swimming), умение танцевать (Dancing), умение считать (Counting), но можете добавить и другие.
Создайте у класса Dog метод show_talents() для показа всех способностей, которыми обладает собака.
Требования к реализации
Класс Talent должен быть абстрактным. Это значит, что объекты такого класса мы создать не сможем, так как одна из его функций объявлена как «чисто» виртуальная (pure virtual).

Каждая способность, наследуемая от абстрактного класса Talent, должна быть представлена в виде отдельного класса.

Пример выполнения
Создаём собаку с именем Steve:

    Dog dog1("Steve")

Добавляем ей умение танцевать и плавать.

Если мы сделаем запрос умений show_talents(), то на экран будет выведено:

This is Steve and it has some talents: 
            It can “Dance” 
            It can “Swim”

Советы и рекомендации
Для хранения способностей можно использовать вектор.
Для создания абстрактного класса рекомендуем пересмотреть видео, где функция voice в классе Animal была объявлена «чисто» виртуальной. Это поможет в выполнении задания.
Что оценивается
Класс Talent является абстрактным.
Все способности являются классами и наследуются от класса Talent.
Класс Dog не наследуется от класса Talent.
При ответе на запрос show_talents в консоли должны быть последовательно написаны все умения, которыми обладает собака.
