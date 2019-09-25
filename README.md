## Lista de Treinamento de PDI do LAPISCO

### Informações:
- Implementação em C/C++
- Dataset usado nas questões sobre machine learning está na pasta **dataset**
- Necessário uso da biblioteca [OpenCV](https://github.com/opencv/opencv) na versão [2.4.9](https://github.com/opencv/opencv/releases/tag/2.4.9) ou [posterior](https://github.com/opencv/opencv/releases/tag/3.4.5)

### Descrição da Lista
| Issue | Descrição |
| ------------- |:-------------|
|[01](https://github.com/lapisco/PDI_trainingList/tree/master/issue_01)|Abrir uma imagem colorida, visualizar e salvar.|
|[02](https://github.com/lapisco/PDI_trainingList/tree/master/issue_02)|Abrir uma imagem colorida, transformar em níveis de cinza, visualizar e salvar imagem gerada.|
|[03](https://github.com/lapisco/PDI_trainingList/tree/master/issue_03)|Abrir uma imagem colorida em RGB, visualizar e salvar cada um dos canais separadamente. Obs: Busquem compreender o que significa cada um dos canais.|
|[04](https://github.com/lapisco/PDI_trainingList/tree/master/issue_04)|Abrir  uma  imagem  colorida,  transformar  em  HSV,  visualizar  e  salvar  cada  um  dos  canais separadamente. Obs: Busquem compreender o que significa cada um dos canais.|
|[05](https://github.com/lapisco/PDI_trainingList/tree/master/issue_05)|Abrir uma imagem colorida, transformar em tom de cinza, visualizar imagem de entrada. Apliquem os  filtros  passa  baixa  mediana  (cv_median)  e  media (cv_blur),  visualizem  os  resultados e salvem.  Obs: Busquem compreender os resultados de cada filtro.|
|[06](https://github.com/lapisco/PDI_trainingList/tree/master/issue_06)|Abrir uma imagem colorida, transformar em tom de cinza, visualizar imagem de entrada. Apliquem os filtros passa alta de canny (cv_canny), visualizem os resultados e salvem. Obs: Busquem compreender os  resultados do filtro.|
|[07](https://github.com/lapisco/PDI_trainingList/tree/master/issue_07)|Abrir uma imagem colorida, transformar em tom de cinza, visualizar imagem de entrada. Apliquem uma limiarização (thresholding), visualizem os resultados e salvem. Obs: Busquem compreender os resultados da técnica.|
|[08](https://github.com/lapisco/PDI_trainingList/tree/master/issue_08)|Abrir uma imagem colorida, transformar em tom de cinza, visualizar imagem de entrada. Apliquem um redimensionamento da imagem, reduzindo e depois aumentando seu tamanho, visualizem os resultados e salvem. Obs: uma imagem 320x240 deve virar uma 160x120 em primeiro caso e 640x480 em segundo caso. |
|[09](https://github.com/lapisco/PDI_trainingList/tree/master/issue_09)|Abrir  uma  imagem  colorida,  transformar  em  tom  de  cinza,  visualizar  imagem  de  entrada.  Criem uma matriz de forma estática com as mesmas dimensões da imagem de entrada (vejam nas propriedades da imagem no Windows), peguem cada um dos pixels da imagem e coloquem na matriz que criaram. Imprimam esta matriz em um arquivo de texto (.txt) do mesmo modo que ela está alocada. |
|[10](https://github.com/lapisco/PDI_trainingList/tree/master/issue_10)|Abrir uma imagem colorida, transformar em tom de cinza, visualizar imagem de entrada. Criem uma matriz de forma estática com as mesmas dimensões da imagem de entrada (vejam nas propriedades da  imagem no Windows), peguem cada um dos pixels da imagem e coloquem na matriz que criaram. Apliquem uma limiarização fazendo uma varredura na matriz. Imprimam esta matriz em um arquivo de texto (.txt) do mesmo modo que ela está alocada. |
|[11](https://github.com/lapisco/PDI_trainingList/tree/master/issue_11)|Abrir uma imagem colorida com o fundo branco e um quadrado preto centralizado, transformar em  tom  de  cinza,  visualizar  imagem  de  entrada.  Criem  uma  matriz  de  forma  estática  com  as  mesmas dimensões da imagem de entrada (vejam nas propriedades da imagem no Windows), peguem cada um dos pixels  da  imagem  e  coloquem  na  matriz  que  criaram.  Calculem  as  coordenadas  (xc,yc)  que  representam  o  centróide deste quadrado. Tentem pintar ou marcar ele na imagem para visualização. Xc será a média todas as  coordenadas  x  que  fazem  parte  do  quadrado,  e  yc  é  as  médias  de  y  do  quadrado.  As  coordenadas  do quadrado são identificadas pelo tom preto (valor 0). Façam esta imagem de entrada no Paint. |
|[12](https://github.com/lapisco/PDI_trainingList/tree/master/issue_12)|Abram um arquivo de texto (pode ser o mesmo gerado no issue 10), criem uma imagem em tom  de cinza e visualizem esta imagem. |
|[13](https://github.com/lapisco/PDI_trainingList/tree/master/issue_13)|Abrir uma imagem colorida, transformar em tom de cinza, visualizar imagem de entrada. Criem uma matriz de forma estática com as mesmas dimensões da imagem de entrada (vejam nas propriedades da imagem no Windows). Apliquem uma convolução fazendo uma varredura na matriz utilizando as máscaras do  operador  gradiente  Sobel  (procurem  no  google).  Visualizem  os  resultados  e  salvem.  Obs:  Busquem  compreender os resultados do operador Sobel (parece com o de canny, apenas parece). |
|[14](https://github.com/lapisco/PDI_trainingList/tree/master/issue_14)|Abrir uma câmera, capturar uma imagem (frame), transforme em tom de cinza, visualizar imagem de entrada. Continue infinitamente capturando, transformando em tom de cinza e vizualizando. |
|[15](https://github.com/lapisco/PDI_trainingList/tree/master/issue_15)|Abrir uma câmera, capturar uma imagem (frame), transforme em tom de cinza, visualizar imagem de  entrada,  aplique  o  filtro  de  canny  e  visualize  os  resultados.  Continue  infinitamente  capturando, transformando em tom de cinza, aplicando canny e visualizando. |
|[16](https://github.com/lapisco/PDI_trainingList/tree/master/issue_16)|Abrir  uma  imagem  colorida,  transformar  para  tom  de  cinza  e  aplicar  uma  Equalização  de histograma utilizando a OpenCv, visualizando a imagem de entrada e seu respectivo histograma inicialmente, e, em seguida, o resultado da equalização e seu histograma. Esta técnica aumenta o contraste da imagem. |
|[17](https://github.com/lapisco/PDI_trainingList/tree/master/issue_17)|Abrir  uma  imagem  colorida,  transformar  para  tom  de  cinza  e  aplicar  uma  Equalização  de  histograma  utilizando  apenas  o  conhecimento  de  manipulação  da  imagem,  sem  a  OpenCv,  visualizando  a  imagem de entrada e seu respectivo histograma inicialmente, e, em seguida, o resultado da equalização e seu  histograma. Esta técnica aumenta o contraste da imagem. |
|[18](https://github.com/lapisco/PDI_trainingList/tree/master/issue_18)| Abrir  uma  imagem  colorida,  transformar  para  tom  de  cinza  e  aplicar  o  operador  gradiente  Laplaciano,  aplique  a  técnica  de  Equalização  no  resultado  obtido  na  detecção  das  bordas,  onde  a  maior intensidade de borda seja 255, e a menor intensidade da borda seja 0. |
|[19](https://github.com/lapisco/PDI_trainingList/tree/master/issue_19)|Abrir uma imagem colorida, transformar para tom de cinza e aplicar o operador gradiente Sobel, visualizando  a  imagem  de  entrada  e  seu  respectivo  histograma  inicialmente,  e,  em  seguida,  o  resultado  do  operador gradiente e seu histograma. Esta técnica realça melhor as bordas da imagem. |
|[20](https://github.com/lapisco/PDI_trainingList/tree/master/issue_20)|Abrir uma imagem colorida, transformar para tom de cinza e aplique a técnica Crescimento de  Regiões (Region Growing). Para isto, inicialmente faça uma imagem com dimensões 320x240 no paint, onde o fundo da imagem seja branco e exista um círculo preto no centro. Utilize algum ponto dentro do circulo preto como semente, onde você deve determinar este ponto analisando imagem previamente. A regra de adesão do método deve ser: “Sempre que um vizinho da região possuir tom de cinza menor que 127, devesse agregar este vizinho à região”. Aplique o Crescimento de Regiões de forma iterativa, em que o algoritmo irá estabilizar apenas quando a região parar de crescer. |
|[21](https://github.com/lapisco/PDI_trainingList/tree/master/issue_21)|Faça o mesmo que o issue 21, alterando apenas o modo de inicializar a semente, onde esta deve ser inicializada com um click na imagem apresentada pela OpenCV.|
|[22](https://github.com/lapisco/PDI_trainingList/tree/master/issue_22)|Faça  o  mesmo  que  o  issue  22,  calculando  no  final  o  centroide  do  objeto  segmentado  pelo método Crescimento de Regiões 3D, apresentando a região segmentada em azul e o centroide em verde. |
|[23](https://github.com/lapisco/PDI_trainingList/tree/master/issue_23)|Abrir uma imagem colorida, transformar para tom de cinza e aplique a técnica Crescimento de Regiões (Region Growing). Para isto, pegue uma imagem qualquer real, com tanto que a mesma possua um objeto  se  destaque  do  fundo.  Inicialize  a  semente  com  um  clique  neste  objeto,  conforme  o  issue  21  e  encontre uma regra de adesão que seja capaz de segmentar este objeto. Aplique o Crescimento de Regiões de forma iterativa, em que o algoritmo irá estabilizar apenas quando a região parar de crescer. |
|[24](https://github.com/lapisco/PDI_trainingList/tree/master/issue_24)|Abrir uma imagem colorida e aplique a técnica Crescimento de Regiões (Region Growing). Para isto,  pegue  uma  imagem  qualquer  real,  com  tanto  que  a  mesma  possua  um  objeto  se  destaque  do  fundo. Inicialize a semente com um clique neste objeto, conforme o issue 21 e encontre uma regra de adesão que seja  capaz  de  segmentar  este  objeto.  Aplique  o  Crescimento  de  Regiões  de  forma  iterativa,  em  que  o algoritmo irá estabilizar apenas quando a região parar de crescer. Este tópico diferenciasse do issue 23 por ser necessário encontrar uma regra que utilize os canais R, G e B simultanemante. |
|[25](https://github.com/lapisco/PDI_trainingList/tree/master/issue_25)|Abrir uma imagem colorida, transformar para tom de cinza e aplique a técnica Crescimento de Regiões  (Region  Growing).  Para  isto,  faça  no  paint  uma  imagem  640x480  com  alguns  objetos  em  preto  e  o fundo  seja  branco.  Neste  tópico  irão  existir  mais  de  um  objeto  para  segmentar,  então  existe  mais  de  uma região. Inicialize a semente com um clique em cada objeto, em que o primeiro clique rotule o objeto como região  1,  pintando  a  região  encontrada  de  vermelho.  Ao  terminar  de  delimitar  a  região  2,  clique  em  outro objeto,  rotulando  esta  região  como  2  e  pinte  esta  região  de  azul.  Faça  o  mesmo  para  um  terceiro  objeto, pintando o mesmo de verde e rotulando sua região como 3. Obs: Ressalto que as regiões que não fazem parte de nenhum objeto devem possuir valor 0. |
|[26](https://github.com/lapisco/PDI_trainingList/tree/master/issue_26)||
|[27](https://github.com/lapisco/PDI_trainingList/tree/master/issue_27)||
|[28](https://github.com/lapisco/PDI_trainingList/tree/master/issue_28)||
|[29](https://github.com/lapisco/PDI_trainingList/tree/master/issue_29)||
|[30](https://github.com/lapisco/PDI_trainingList/tree/master/issue_30)||
|[31](https://github.com/lapisco/PDI_trainingList/tree/master/issue_31)||
|[32](https://github.com/lapisco/PDI_trainingList/tree/master/issue_32)||
|[33](https://github.com/lapisco/PDI_trainingList/tree/master/issue_33)||
|[34](https://github.com/lapisco/PDI_trainingList/tree/master/issue_34)||
|[35](https://github.com/lapisco/PDI_trainingList/tree/master/issue_35)||
|[36](https://github.com/lapisco/PDI_trainingList/tree/master/issue_36)||
|[37](https://github.com/lapisco/PDI_trainingList/tree/master/issue_37)||
|[38](https://github.com/lapisco/PDI_trainingList/tree/master/issue_38)||
|[39](https://github.com/lapisco/PDI_trainingList/tree/master/issue_39)||
|[40](https://github.com/lapisco/PDI_trainingList/tree/master/issue_40)||
|[41/42](https://github.com/lapisco/PDI_trainingList/tree/master/issue_41_42)||
|[43](https://github.com/lapisco/PDI_trainingList/tree/master/issue_43)||
|[44](https://github.com/lapisco/PDI_trainingList/tree/master/issue_44)||
|[45](https://github.com/lapisco/PDI_trainingList/tree/master/issue_45)||
|[46](https://github.com/lapisco/PDI_trainingList/tree/master/issue_46)||
|[47](https://github.com/lapisco/PDI_trainingList/tree/master/issue_47)||
|[48](https://github.com/lapisco/PDI_trainingList/tree/master/issue_48)||
|[49](https://github.com/lapisco/PDI_trainingList/tree/master/issue_49)||
|[50](https://github.com/lapisco/PDI_trainingList/tree/master/issue_50)||
|[51](https://github.com/lapisco/PDI_trainingList/tree/master/issue_51)||
|[52](https://github.com/lapisco/PDI_trainingList/tree/master/issue_52)||
|[53/54](https://github.com/lapisco/PDI_trainingList/tree/master/issue_53_54)||
|[55](https://github.com/lapisco/PDI_trainingList/tree/master/issue_55)||
|[56](https://github.com/lapisco/PDI_trainingList/tree/master/issue_56)||
|[57](https://github.com/lapisco/PDI_trainingList/tree/master/issue_57)||
|[58](https://github.com/lapisco/PDI_trainingList/tree/master/issue_58)||
|[59](https://github.com/lapisco/PDI_trainingList/tree/master/issue_59)||
|[60](https://github.com/lapisco/PDI_trainingList/tree/master/issue_60)||
|[60-53](https://github.com/lapisco/PDI_trainingList/tree/master/issue_60to53)||
|[61](https://github.com/lapisco/PDI_trainingList/tree/master/issue_61)||
