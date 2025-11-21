
<img width="1535" height="1370" alt="image" src="https://github.com/user-attachments/assets/ffbfed42-a33c-4206-babf-9cfb250e39e8" />

# リズム天国プラス:
これはGBAゲームである「リズム天国」の非公式機能追加プロジェクト「リズム天国プラス」です。このプロジェクトは、先述ゲームの非公式英語翻訳プロジェクト「Rhythm Heaven Advance」およびその一部である「Rhythm Heaven Advance Plus」に追加される新機能を日本語版のリズム天国に移植したものとなります。
このプロジェクトは、現在**進行中**です！つまり、未完成もしくは不安定であるためパッチ等のダウンロードリンクは提供されていません。
ただし、プロジェクトのビルドの方法は以下に説明があります。プロジェクトがリリース可能な状態まで進んだ時点で、パッチのダウンロードが可能になる予定です。

ご質問、ご提案、プレイテスト用の当ビルドについては以下のリンクを参照下さい！
[リズム天国プラス　ツイッター](https://x.com/rhytngkplus)
[Rhythm Heaven Advanceのdiscordサーバー](https://discord.gg/8PET8w8PU8)
**（質問などRhythm Heaven Advanceより移植されたものについてはこちらで発言しても構いませんが、リズム天国プラス独自の内容に関する質問はこのdiscordサーバーではお控えください！）**

## インストール方法

このインストールのプロジェクトにはLinuxターミナルにアクセスする必要があります。もしWindows 10やWindows 11をご使用であれば、**WSL (Windows Subsystem for Linux)**を使用することで簡単にインストール可能です。既にLinuxをご使用であれば、**「依存関係のインストール」**セクションまでスキップしても構いません。WSLを使用するのであれば、以下のガイドに従ってください：

#### WSLのインストール

まず、コマンドプロンプトもしくはPowershellを管理者として実行します。
`wsl --install` と入力して実行すると、UbuntuディストリビューションをデフォルトとしてWSLが自動的にインストールされます。この手順が終わったら、デバイスを再起動することでインストールを終了します。

*注：WSLを使用するにはBIOS設定で仮想化機能を有効にする必要があります。問題が発生した場合は、BIOS起動方法を確認し、お使いのコンピュータで仮想化機能を有効にしてください。その他のインストールに関する問題については、[Microsoft公式インストールガイド](https://docs.microsoft.com/ja-jp/windows/wsl/install)を参照してください。*
<br>
WSLのインストールに成功し、起動するとユーザー名、パスワードの入力、パスワードの確認が求められます。パスワードを入力する際、キーボード上で文字を入力してもアスタリスク等は表示されないため入力は慎重に行ってください。また、内容を忘れないようにしてください。

ユーザーを作成したら、ターミナルの設定を完了するために最後にいくつかコマンドを入力する必要があります。まず、`sudo apt update`と入力し実行、完了したら次に`sudo apt upgrade`と入力し実行します。これらのコマンドは途中でパスワードを求めてくるのでその都度パスワードを入力してください。もし`Do you want to continue? [Y/n]`と表示されたら`y`とだけ入力し、Enterキーを押してください。これで、WSLの設定は完了しました。
<br>
また、WindowsからLinuxのファイルにアクセスするためにドライブ文字を設定しておくと便利です。もし行う場合は、[このサイト（英語）](https://github.com/HackerN64/HackerSM64/wiki/Mounting-WSL-to-Drive)を参照してください。

もしLinuxターミナルについて詳しくなければ、覚えておくべき重要なコマンドは`cd`です。これは現在自分のいるディレクトリから移動するためのコマンドです。`cd ~/`でホームディレクトリへ移動することができます。リポジトリを保存するのにこのホームディレクトリが推奨されています。そして、WSLターミナルでのコピー&ペーストはCtrl+CとCtrl+Vではなく右クリックで行います。そのため、このガイドのコマンドをターミナルに貼り付けるには、Ctrl+Cでコピーした後、ターミナル内で右クリックして貼り付けてください。


#### 依存関係のインストール

プロジェクトに必要な依存関係をインストールするには、まず次のコマンドを実行してください：

`sudo apt install build-essential binutils-arm-none-eabi git libpng-dev ffmpeg`

その後このコマンドも実行する必要があります：

`sudo ln -s /proc/self/mounts /etc/mtab`

このコマンドは、devkitProのインストール時にWSLで発生する問題の解決に役立ちます。必ずしも実行する必要はなく、エラーが発生する場合もあります。エラーが発生しても心配せず、次の手順に進んでください。

その後、devkitProをインストールする必要があります。このプロセスは非常に複雑ですので、表示されるパスワードを求められたら入力しながら、以下のコマンドを記載された順序で全て実行してください：

`wget https://apt.devkitpro.org/install-devkitpro-pacman`
`chmod +x ./install-devkitpro-pacman`
`sudo ./install-devkitpro-pacman`
`export DEVKITPRO=/opt/devkitpro`
`export DEVKITARM=/opt/devkitpro/devkitARM`
`export DEVKITPPC=/opt/devkitpro/devkitPPC`
`sudo dkp-pacman -Sy`
`sudo dkp-pacman -S gba-dev`

最後までコマンドを実行し終えたら、Enterキーを押して`y`と入力します。これで依存関係のインストール


#### リポジトリのクローン

このプロジェクトをクローンする用意が整いました。ではまず、`cd ~/`を実行してホームディレクトリに移動した後以下のコマンドを実行してください：

`git clone https://github.com/Mizuka-lover/RhythmTengokuPlus.git rt`

これでリポジトリが新しく作成された`rt`フォルダーにクローンされます。もしフォルダ名を別の名前にしたい場合は、`rt`を任意の名前に変えることもできます。

ROMをビルドする前に、リズム天国で使われているコンパイラーであるagbccをインストールする必要があります。ホームディレクトリにいることを確認して、以下のコマンドを実行します：

`git clone https://github.com/pret/agbcc`

そして、`cd ~/agbcc`と入力してagbccディレクトリへ移動し、コンパイラーを`./build.sh`と入力することでビルドします。そして`./install.sh ~/rt`と入力することでコンパイラーをリズム天国プラスのフォルダーへインストールします。

最後に、オリジナルのリズム天国のROMデータを用意する必要があります。（Rev.0及びRev.1の2バージョンが存在していますが、どちらでも構いません）名前を`baserom.gba`に変更して`rt`ディレクトリに配置してください。


#### ROMのビルド

リポジトリをビルドする準備が整いました！`cd ~/rt`でリポジトリのフォルダに移動し、`make -j`と入力することでROMをビルドします。(`-j`パラメータにより、ビルドはCPUの複数コアで実行可能となり、処理速度が大幅に向上します。) ROMのビルドに成功したら、`build/rhythmtengokuplus.gba`（Rev.1のROMを使用した場合は`build/rhythmtengokuplus_rev1.gba`）にROMがビルドされています！これがリズム天国プラスのコンパイルされたROMです。

その他のご質問や不明点がございましたら、[rhmodding discord server（英語）](https://discord.com/invite/ps4rq53)へどうぞ！（リズム天国の改造関連についてのサーバーです）

## クレジット（後日追記予定）

#### Rhythm Heaven Advance及びリズム天国プラスは、協力してくれた以下の素晴らしい人々なしでは実現できませんでした！

アセット作成:
+ SkyeStage
+ Cash Banooka
+ geometricentric
+ somethingAccurate
+ TinyCastleGuy
+ The Eggo55
+ Vincells
+ WindowsTiger
+ Kievit
+ NotWario
+ amdree
+ patataofcourse
+ Nate Candles

グラフィックデザイン:
+ Tailx
+ vincells
+ Borists

プログラミング:
+ Itaific
+ ShaffySwitcher

プログラミング補助:
+ Deni_iguess
+ patataofcourse
+ Arthurtilly
+ Estexnt
+ Nibblez
+ Conhlee
+ MissKnowledge

翻訳・ローカライゼーション:
+ Mizuka Lover
+ ShaffySwitcher
+ somethingAccurate
+ patataofcourse
+ castle

ローカライゼーション補助:
+ Cash Banooka
+ SkyStage
+ RedRobocon
+ ThisIsMyUsername

サウンドエフェクト:
+ リズム天国 ザ・ベスト+
+ Cherryberryfaygo
+ Nabix（そして彼の兄弟姉妹）

テストプレイ：
Rhythm Heaven Advanceプロジェクトのdiscordサーバーにいるみんな（特にnqwol氏）

皆さんの手助けに感謝します！

