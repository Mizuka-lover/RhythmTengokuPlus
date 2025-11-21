#include "global.h"
#include "debug_menu.h"


/* DEBUG MENU TABLE */


// [D_089ddbe8] Debug Menu Table
struct DebugMenuEntry debug_menu_entry_table[] = {
    /* Drum LIVE */ {
        /* Scene */ &scene_drum_live,
        /* Label */ "ライブ",
        /* Epil. */ TRUE
    },
    /* Mr. Upbeat */ {
        /* Scene */ &scene_mr_upbeat,
        /* Label */ "ウラおとこ",
        /* Epil. */ FALSE
    },
    /* Sick Beats Endless */ {
        /* Scene */ &scene_sick_beats_endless,
        /* Label */ "バイキン　はかせ　ＳＰ",
        /* Epil. */ FALSE
    },
    /* Quiz Show Endless */ {
        /* Scene */ &scene_quiz_show_endless,
        /* Label */ "クイズ　ＳＰ",
        /* Epil. */ FALSE
    },
    /* Mannequin Factory */ {
        /* Scene */ &scene_mannequin_factory,
        /* Label */ "マネキンこうじょう",
        /* Epil. */ FALSE
    },
    /* Remix 8 */ {
        /* Scene */ &scene_remix_8,
        /* Label */ "リミックス　８",
        /* Epil. */ TRUE
    },
    /* Remix 7 */ {
        /* Scene */ &scene_remix_7,
        /* Label */ "リミックス　７",
        /* Epil. */ TRUE
    },
    /* Remix 6 */ {
        /* Scene */ &scene_remix_6,
        /* Label */ "リミックス　６",
        /* Epil. */ TRUE
    },
    /* Remix 5 */ {
        /* Scene */ &scene_remix_5,
        /* Label */ "リミックス　５",
        /* Epil. */ TRUE
    },
    /* Remix 4 */ {
        /* Scene */ &scene_remix_4,
        /* Label */ "リミックス　４",
        /* Epil. */ TRUE
    },
    /* Remix 3 */ {
        /* Scene */ &scene_remix_3,
        /* Label */ "リミックス　３",
        /* Epil. */ TRUE
    },
    /* Remix 2 */ {
        /* Scene */ &scene_remix_2,
        /* Label */ "リミックス　２",
        /* Epil. */ TRUE
    },
    /* Remix 1 */ {
        /* Scene */ &scene_remix_1,
        /* Label */ "リミックス　１",
        /* Epil. */ TRUE
    },
    /* Remix 1 (Tempo Up) */ {
        /* Scene */ &scene_remix_1_extra,
        /* Label */ "リミックス　１　ＴＥＭＰＯ　ＵＰ",
        /* Epil. */ TRUE
    },
    /* The Bon Odori */ {
        /* Scene */ &scene_bon_odori,
        /* Label */ "ザ　ぼんおどり",
        /* Epil. */ TRUE
    },
    /* Bon Dance */ {
        /* Scene */ &scene_bon_dance,
        /* Label */ "ボンダンス",
        /* Epil. */ TRUE
    },
    /* Rhythm Toys (Cat Machine) */ {
        /* Scene */ &scene_cat_machine,
        /* Label */ "ネコマシーン",
        /* Epil. */ FALSE
    },
    /* Mechanical Horse */ {
        /* Scene */ &scene_mechanical_horse,
        /* Label */ "うまマシーン",
        /* Epil. */ FALSE
    },
    /* Rhythm Toys (Confession Machine) */ {
        /* Scene */ &scene_love_machine,
        /* Label */ "こくはくマシーン",
        /* Epil. */ FALSE
    },
    /* Rhythm Toys (Rap Machine) */ {
        /* Scene */ &scene_rap_machine,
        /* Label */ "ラップマシーン",
        /* Epil. */ FALSE
    },
    /* Lesson (Basic 1) */ {
        /* Scene */ &scene_drum_lesson_basic_1,
        /* Label */ "レッスン　（ベーシック　１）",
        /* Epil. */ FALSE
    },
    /* Lesson (Basic 2) */ {
        /* Scene */ &scene_drum_lesson_basic_2,
        /* Label */ "レッスン　（ベーシック　２）",
        /* Epil. */ FALSE
    },
    /* Lesson (Short 1) */ {
        /* Scene */ &scene_drum_lesson_short_1,
        /* Label */ "レッスン　（ショート　１）",
        /* Epil. */ FALSE
    },
    /* Lesson (Short 2) */ {
        /* Scene */ &scene_drum_lesson_short_2,
        /* Label */ "レッスン　（ショート　２）",
        /* Epil. */ FALSE
    },
    /* Lesson (Short 3) */ {
        /* Scene */ &scene_drum_lesson_short_3,
        /* Label */ "レッスン　（ショート　３）",
        /* Epil. */ FALSE
    },
    /* Lesson (Short 4) */ {
        /* Scene */ &scene_drum_lesson_short_4,
        /* Label */ "レッスン　（ショート　４）",
        /* Epil. */ FALSE
    },
    /* Lesson (Short 5) */ {
        /* Scene */ &scene_drum_lesson_short_5,
        /* Label */ "レッスン　（ショート　５）",
        /* Epil. */ FALSE
    },
    /* Lesson (Short 6) */ {
        /* Scene */ &scene_drum_lesson_short_6,
        /* Label */ "レッスン　（ショート　６）",
        /* Epil. */ FALSE
    },
    /* Lesson (Short 7) */ {
        /* Scene */ &scene_drum_lesson_short_7,
        /* Label */ "レッスン　（ショート　７）",
        /* Epil. */ FALSE
    },
    /* Lesson (Short 8) */ {
        /* Scene */ &scene_drum_lesson_short_8,
        /* Label */ "レッスン　（ショート　８）",
        /* Epil. */ FALSE
    },
    /* Lesson (Short 9) */ {
        /* Scene */ &scene_drum_lesson_short_9,
        /* Label */ "レッスン　（ショート　９）",
        /* Epil. */ FALSE
    },
    /* Lesson (Long 1) */ {
        /* Scene */ &scene_drum_lesson_long_1,
        /* Label */ "レッスン　（ロング　１）",
        /* Epil. */ FALSE
    },
    /* Lesson (Long 2) */ {
        /* Scene */ &scene_drum_lesson_long_2,
        /* Label */ "レッスン　（ロング　２）",
        /* Epil. */ FALSE
    },
    /* Lesson (Long 3) */ {
        /* Scene */ &scene_drum_lesson_long_3,
        /* Label */ "レッスン　（ロング　３）",
        /* Epil. */ FALSE
    },
    /* Lesson (Long 4) */ {
        /* Scene */ &scene_drum_lesson_long_4,
        /* Label */ "レッスン　（ロング　４）",
        /* Epil. */ FALSE
    },
    /* Lesson (Long 5) */ {
        /* Scene */ &scene_drum_lesson_long_5,
        /* Label */ "レッスン　（ロング　５）",
        /* Epil. */ FALSE
    },
    /* Lesson (Long 6) */ {
        /* Scene */ &scene_drum_lesson_long_6,
        /* Label */ "レッスン　（ロング　６）",
        /* Epil. */ FALSE
    },
    /* Lesson (High-Tech 1) */ {
        /* Scene */ &scene_drum_lesson_hi_tech_1,
        /* Label */ "レッスン　（ハイテク　１）",
        /* Epil. */ FALSE
    },
    /* Lesson (High-Tech 2) */ {
        /* Scene */ &scene_drum_lesson_hi_tech_2,
        /* Label */ "レッスン　（ハイテク　２）",
        /* Epil. */ FALSE
    },
    /* Studio Drummer */ {
        /* Scene */ &scene_drum_studio_ver0,
        /* Label */ "スタジオドラマー　（Ｖｅｒ．０）",
        /* Epil. */ FALSE
    },
    /* Studio Drummer */ {
        /* Scene */ &scene_drum_studio_ver2,
        /* Label */ "スタジオドラマー　（Ｖｅｒ．２）",
        /* Epil. */ FALSE
    },
    /* Rhythm Test */ {
        /* Scene */ &scene_rhythm_test,
        /* Label */ "リズムかん　チェック",
        /* Epil. */ FALSE
    },
    /* Reading Material */ {
        /* Scene */ &scene_reading,
        /* Label */ "リズム　しりょうしつ",
        /* Epil. */ FALSE
    },
    /* Quiz Show */ {
        /* Scene */ &scene_quiz_show,
        /* Label */ "クイズ",
        /* Epil. */ TRUE
    },
    /* Rap Men */ {
        /* Scene */ &scene_rap_men,
        /* Label */ "ラップメン",
        /* Epil. */ TRUE
    },
    /* Rap Women (by YONE) */ {
        /* Scene */ &scene_rap_women,
        /* Label */ "ラップウィメン　（ｂｙ　ＹＯＮＥ）",
        /* Epil. */ TRUE
    },
    /* Rap Women (by KAZU) */ {
        /* Scene */ &scene_rap_women_unused,
        /* Label */ "ラップウィメン　（Ｂｙ　ＫＡＺＵ）",
        /* Epil. */ TRUE
    },
    /* Space Dance */ {
        /* Scene */ &scene_space_dance,
        /* Label */ "スペースダンス",
        /* Epil. */ TRUE
    },
    /* Cosmic Dance */ {
        /* Scene */ &scene_cosmic_dance,
        /* Label */ "コスモダンス",
        /* Epil. */ TRUE
    },
    /* Showtime */ {
        /* Scene */ &scene_showtime,
        /* Label */ "ショータイム",
        /* Epil. */ TRUE
    },
    /* RIQ Data Check */ {
        /* Scene */ &scene_data_check,
        /* Label */ "ＲＩＱデータチェック",
        /* Epil. */ FALSE
    },
    /* Opening (B Type) */ {
        /* Scene */ &scene_drum_samurai_opening_cutscene,
        /* Label */ "オープニング　（Ｂ　Ｔｙｐｅ）",
        /* Epil. */ FALSE
    },
    /* Opening (A Type) */ {
        /* Scene */ &scene_drum_samurai_demo_cutscene,
        /* Label */ "オープニング　（Ａ　Ｔｙｐｅ）",
        /* Epil. */ FALSE
    },
    /* Drum Inrto (Unused 1) */ {
        /* Scene */ &scene_drum_intro_unused,
        /* Label */ "ドラムイントロ　（みしよう）",
        /* Epil. */ TRUE
    },
    /* Drum Intro (Unused 2) */ {
        /* Scene */ &scene_drum_intro_unused_2,
        /* Label */ "ドラムイントロ　（みしよう　２）",
        /* Epil. */ TRUE
    },
    /* Drum Intro (Unused 3) */ {
        /* Scene */ &scene_drum_intro_unused_3,
        /* Label */ "ドラムイントロ　（みしよう　３）",
        /* Epil. */ TRUE
    },
    /* Tram & Pauline */ {
        /* Scene */ &scene_tram_pauline,
        /* Label */ "トランとポリン",
        /* Epil. */ TRUE
    },
    /* Toss Boys */ {
        /* Scene */ &scene_toss_boys,
        /* Label */ "トスボーイズ",
        /* Epil. */ TRUE
    },
    /* Toss Boys 2 */ {
        /* Scene */ &scene_toss_boys_2,
        /* Label */ "トスボーイズ　２",
        /* Epil. */ TRUE
    },
    /* Drum Girls LIVE */ {
        /* Scene */ &scene_drum_girls_live_unused,
        /* Label */ "ドラムガールズ",
        /* Epil. */ TRUE
    },
    /* Power Calligraphy */ {
        /* Scene */ &scene_power_calligraphy,
        /* Label */ "リズムおしゅうじ",
        /* Epil. */ TRUE
    },
    /* Rat Race */ {
        /* Scene */ &scene_rat_race,
        /* Label */ "こっそりラット",
        /* Epil. */ TRUE
    },
    /* Flash Memory Test */ {
        /* Scene */ &scene_flash_mem_test,
        /* Label */ "フラッシュメモリテスト",
        /* Epil. */ FALSE
    },
    /* Fireworks */ {
        /* Scene */ &scene_fireworks,
        /* Label */ "ハナビ",
        /* Epil. */ TRUE
    },
    /* Metronome */ {
        /* Scene */ &scene_metronome,
        /* Label */ "メトロノーム",
        /* Epil. */ TRUE
    },
    /* Bunny Hop */ {
        /* Scene */ &scene_bunny_hop,
        /* Label */ "ウサギとび",
        /* Epil. */ TRUE
    },
    /* Dance Lesson 1 */ {
        /* Scene */ &scene_remix_1_unused,
        /* Label */ "ダンスレッスン　１",
        /* Epil. */ TRUE
    },
    /* Wizard's Waltz */ {
        /* Scene */ &scene_wizards_waltz,
        /* Label */ "まほうつかい",
        /* Epil. */ TRUE
    },
    /* Marching Orders */ {
        /* Scene */ &scene_marching_orders,
        /* Label */ "マーチャ",
        /* Epil. */ TRUE
    },
    /* Marching Orders 2 */ {
        /* Scene */ &scene_marching_orders_2,
        /* Label */ "マーチャ　２",
        /* Epil. */ TRUE
    },
    /* Marching Orders (Tempo Up) */ {
        /* Scene */ &scene_marching_orders_extra,
        /* Label */ "マーチャ　ＴＥＭＰＯ　ＵＰ",
        /* Epil. */ TRUE
    },
    /* Tap Trial */ {
        /* Scene */ &scene_tap_trial,
        /* Label */ "タップダンズ",
        /* Epil. */ TRUE
    },
    /* Tap Trial 2 */ {
        /* Scene */ &scene_tap_trial_2,
        /* Label */ "スーパータップ",
        /* Epil. */ TRUE
    },
    /* Samurai Slice */ {
        /* Scene */ &scene_samurai_slice,
        /* Label */ "ゐあひぎり",
        /* Epil. */ TRUE
    },
    /* Spaceball */ {
        /* Scene */ &scene_spaceball,
        /* Label */ "エアーバッター",
        /* Epil. */ TRUE
    },
    /* Spaceball 2 */ {
        /* Scene */ &scene_spaceball_2,
        /* Label */ "エアーバッター　２",
        /* Epil. */ TRUE
    },
    /* Spaceball (Tempo Up) */ {
        /* Scene */ &scene_spaceball_extra,
        /* Label */ "エアーバッター　ＴＥＭＰＯ　ＵＰ",
        /* Epil. */ TRUE
    },
    /* Sneaky Spirits */ {
        /* Scene */ &scene_sneaky_spirits,
        /* Label */ "しろいおばけ",
        /* Epil. */ TRUE
    },
    /* Sneaky Spirits 2 */ {
        /* Scene */ &scene_sneaky_spirits_2,
        /* Label */ "しろいおばけ　２",
        /* Epil. */ TRUE
    },
    /* Ninja Bodyguard */ {
        /* Scene */ &scene_ninja_bodyguard,
        /* Label */ "ニンジャ",
        /* Epil. */ TRUE
    },
    /* Ninja Bodyguard 2 */ {
        /* Scene */ &scene_ninja_reincarnate,
        /* Label */ "ニンジャの　しそん",
        /* Epil. */ TRUE
    },
    /* Bouncy Road */ {
        /* Scene */ &scene_bouncy_road,
        /* Label */ "ホッピングロード",
        /* Epil. */ TRUE
    },
    /* Bouncy Road 2 */ {
        /* Scene */ &scene_bouncy_road_2,
        /* Label */ "ホッピングロード　２",
        /* Epil. */ TRUE
    },
    /* Sick Beats */ {
        /* Scene */ &scene_sick_beats,
        /* Label */ "バイキン　はかせ",
        /* Epil. */ TRUE
    },
    /* Rhythm Tweezers */ {
        /* Scene */ &scene_rhythm_tweezers,
        /* Label */ "リズムだつもう",
        /* Epil. */ TRUE
    },
    /* Rhythm Tweezers 2 */ {
        /* Scene */ &scene_rhythm_tweezers_2,
        /* Label */ "リズムだつもう　２",
        /* Epil. */ TRUE
    },
    /* Rhythm Tweezers (Tempo Up) */ {
        /* Scene */ &scene_rhythm_tweezers_extra,
        /* Label */ "リズムだつもう　ＴＥＭＰＯ　ＵＰ",
        /* Epil. */ TRUE
    },
    /* Night Walk */ {
        /* Scene */ &scene_night_walk,
        /* Label */ "ナイト　ウォーク",
        /* Epil. */ TRUE
    },
    /* Night Walk 2 */ {
        /* Scene */ &scene_night_walk_2,
        /* Label */ "ナイト　ウォーク　２",
        /* Epil. */ TRUE
    },
    /* Polyrhythm */ {
        /* Scene */ &scene_polyrhythm,
        /* Label */ "ポリリズム",
        /* Epil. */ TRUE
    },
    /* Polyrhythm 2 */ {
        /* Scene */ &scene_polyrhythm_2,
        /* Label */ "ポリリズム　２",
        /* Epil. */ TRUE
    },
    /* The Clappy Trio */ {
        /* Scene */ &scene_clappy_trio,
        /* Label */ "パチパチ３にんしゅう",
        /* Epil. */ TRUE
    },
    /* The Snappy Trio */ {
        /* Scene */ &scene_snappy_trio,
        /* Label */ "バリバリ３にんしゅう",
        /* Epil. */ TRUE
    },
    /* The Clappy Trio (Tempo Up) */ {
        /* Scene */ &scene_clappy_trio_extra,
        /* Label */ "パチパチ３にんしゅう　ＴＥＭＰＯ　ＵＰ",
        /* Epil. */ TRUE
    }, 
    /* Karate Man */ {
        /* Scene */ &scene_karate_man,
        /* Label */ "カラテカ",
        /* Epil. */ TRUE
    },
    /* Karate Man 2 */ {
        /* Scene */ &scene_karate_man_2,
        /* Label */ "カラテカ　２",
        /* Epil. */ TRUE
    },
    /* Karate Man (Tempo Up) */ {
        /* Scene */ &scene_karate_man_extra,
        /* Label */ "カラテカ　ＴＥＭＰＯ　ＵＰ",
        /* Epil. */ TRUE
    },
    /* Tanuki and Monkey */ {
        /* Scene */ &scene_tanuki_and_monkey,
        /* Label */ "サルとポンタ",
        /* Epil. */ TRUE
    },
    /* R-IQ (Title Screen) */ {
        /* Scene */ &scene_title,
        /* Label */ "Ｒ－ＩＱ　（タイトル）",
        /* Epil. */ FALSE
    },
    /* R-IQ (Main Menu) */ {
        /* Scene */ &scene_main_menu,
        /* Label */ "Ｒ－ＩＱ　（メニュー）",
        /* Epil. */ FALSE
    },
    /* R-IQ (Game Select) */ {
        /* Scene */ &scene_game_select,
        /* Label */ "Ｒ－ＩＱ　（ゲーム）",
        /* Epil. */ FALSE
    },
    /* R-IQ (Rhythm Data Room) */ {
        /* Scene */ &scene_data_room,
        /* Label */ "Ｒ－ＩＱ　（しりょうしつ）",
        /* Epil. */ FALSE
    },
    /* R-IQ (Studio) */ {
        /* Scene */ &scene_studio,
        /* Label */ "Ｒ－ＩＱ　（スタジオ）",
        /* Epil. */ FALSE
    },
    /* R-IQ (Options) */ {
        /* Scene */ &scene_options_menu,
        /* Label */ "Ｒ－ＩＱ　（オプション）",
        /* Epil. */ FALSE
    },
    /* R-IQ (Result 1) */ {
        /* Scene */ &scene_results_ver_debug,
        /* Label */ "Ｒ－ＩＱ　（リザルト）",
        /* Epil. */ FALSE
    },
    /* R-IQ (Result 2) */ {
        /* Scene */ &scene_results_ver_rank,
        /* Label */ "Ｒ－ＩＱ　（リザルト　２）",
        /* Epil. */ FALSE
    },
    /* R-IQ (Result 3) */ {
        /* Scene */ &scene_results_ver_score,
        /* Label */ "Ｒ－ＩＱ　（リザルト　３）",
        /* Epil. */ FALSE
    },
    /* R-IQ (Result 4) */ {
        /* Scene */ &scene_epilogue,
        /* Label */ "Ｒ－ＩＱ　（リザルト　４）",
        /* Epil. */ TRUE
    },
    /* R-IQ (Debug Menu) */ {
        /* Scene */ &scene_debug_menu,
        /* Label */ "Ｒ－ＩＱ　（デバッグ）",
        /* Epil. */ FALSE
    },
    /* R-IQ (Rhythm Library) */ {
        /* Scene */ &scene_arrival,
        /* Label */ "Ｒ－ＩＱ　（にゅうか）",
        /* Epil. */ FALSE
    },
    /* R-IQ (Perfect) */ {
        /* Scene */ &scene_perfect,
        /* Label */ "Ｒ－ＩＱ　（パーフェクト）",
        /* Epil. */ FALSE
    },
    /* R-IQ (Cafe) */ {
        /* Scene */ &scene_cafe,
        /* Label */ "Ｒ－ＩＱ　（きっさカウンセル）",
        /* Epil. */ FALSE
    },
    /* R-IQ (Endless Games) */ {
        /* Scene */ &scene_endless_menu,
        /* Label */ "Ｒ－ＩＱ　（エンドレス）",
        /* Epil. */ FALSE
    },
    /* R-IQ (Drum Lessons) */ {
        /* Scene */ &scene_lessons_menu,
        /* Label */ "Ｒ－ＩＱ　（ドラムレッスン）",
        /* Epil. */ FALSE
    },
    /* R-IQ (Rhythm Toys) */ {
        /* Scene */ &scene_toys_menu,
        /* Label */ "Ｒ－ＩＱ　（おもちゃ）",
        /* Epil. */ FALSE
    },
    /* Ending (from clearing Remix 6) */ {
        /* Scene */ &scene_staff_credit_remix_6,
        /* Label */ "エンディング　（クリアご）",
        /* Epil. */ FALSE
    },
    /* Ending (from Game Select) */ {
        /* Scene */ &scene_staff_credit,
        /* Label */ "エンディング　（おまけから）",
        /* Epil. */ FALSE
    },
    /* Data Clear */ {
        /* Scene */ &scene_data_clear,
        /* Label */ "データクリア",
        /* Epil. */ FALSE
    },
    /* Warning */ {
        /* Scene */ &scene_warning,
        /* Label */ "けいこく",
        /* Epil. */ FALSE
    },
    /* Disclaimer */ {
        /* Scene */ &scene_disclamer,
        /* Label */ "けいこく　２",
        /* Epil. */ FALSE
    },
    /* Snappy Trio (Unused) */ {
        /* Scene */ &scene_snappy_trio_unused,
        /* Label */ "バリバリ３にんしゅう　（みしよう）",
        /* Epil. */ TRUE
    },
    /* Bouncy Road (Unused) */ {
        /* Scene */ &scene_bouncy_road_unused,
        /* Label */ "ホッピングロード　（みしよう）",
        /* Epil. */ TRUE
    },
    /* Bouncy Road (Unused 2) */ {
        /* Scene */ &scene_bouncy_road_unused_2,
        /* Label */ "ホッピングロード　（みしよう　２）",
        /* Epil. */ TRUE
    },
    /* Spaceball (Unused) */ {
        /* Scene */ &scene_spaceball_unused,
        /* Label */ "エアーバッター　（みしよう）",
        /* Epil. */ TRUE
    },
    /* Spaceball (Unused 2) */ {
        /* Scene */ &scene_spaceball_unused_2,
        /* Label */ "エアーバッター　（みしよう　２）",
        /* Epil. */ TRUE
    },
    /* Tap Trial (Unused) */ {
        /* Scene */ &scene_tap_trial_unused,
        /* Label */ "タップダンズ　（みしよう）",
        /* Epil. */ TRUE
    },
    /* Marching Orders (Unused) */ {
        /* Scene */ &scene_marching_orders_unused,
        /* Label */ "マーチャ　（みしよう）",
        /* Epil. */ TRUE
    },
    /* Horse Machine (Unused) */ {
        /* Scene */ &scene_mechanical_horse_unused,
        /* Label */ "うまマシーン　（みしよう）",
        /* Epil. */ TRUE
    },
    END_OF_DEBUG_ENTRIES
};


// [D_089ddf60] Page Number Digits
char debug_menu_counter_digits[] = "０１２３４５６７８９ＡＢＣＤＥＦＧＨＩＪＫＬＭＮＯＰＱＲＳＴＵＶＷＸＹＺ";


// Render Text
void debug_menu_render_table(s32 targetPage, s32 targetRow) {
    char string[100];
    s32 totalPages;
    u32 i, j;

    totalPages = (gDebugMenu->totalEntries - 1) / DEBUG_MENU_ENTRY_PER_PAGE;

    if (targetPage < 0) {
        targetPage = totalPages;
    }

    if (targetPage > totalPages) {
        targetPage = 0;
    }

    if ((targetPage * DEBUG_MENU_ENTRY_PER_PAGE) + targetRow >= gDebugMenu->totalEntries) {
        targetRow = (gDebugMenu->totalEntries - 1) - (totalPages * DEBUG_MENU_ENTRY_PER_PAGE);
    }

    if (targetPage != gDebugMenu->page) {
        struct PrintedTextAnim *textAnim;

        for (i = 0; i < DEBUG_MENU_ENTRY_PER_PAGE; i++) {
            if (gDebugMenu->textLines[i] > -1) {
                delete_bmp_font_obj_text_anim(gDebugMenu->objFont, gDebugMenu->textLines[i]);
                sprite_delete(gSpriteHandler, gDebugMenu->textLines[i]);
                gDebugMenu->textLines[i] = -1;
            }
        }

        for (j = 0, i = (targetPage * DEBUG_MENU_ENTRY_PER_PAGE); (i < (targetPage * DEBUG_MENU_ENTRY_PER_PAGE) + DEBUG_MENU_ENTRY_PER_PAGE) && (i < gDebugMenu->totalEntries); j++, i++) {
            textAnim = bmp_font_obj_print_l(gDebugMenu->objFont, debug_menu_entry_table[i].label, 1, 0);
            gDebugMenu->textLines[j] = sprite_create(gSpriteHandler, textAnim->frames, 0, 32, (j * 18) + 32, 0x800, 0, 0, 0);
        }

        delete_bmp_font_obj_text_anim(gDebugMenu->objFont, gDebugMenu->counter);
        strncpy(string, &debug_menu_counter_digits[(targetPage + 1) * 2], 2);
        string[2] = '\0';
        strcat(string, "／");
        strncat(string, &debug_menu_counter_digits[(totalPages + 1) * 2], 2);
        textAnim = bmp_font_obj_print_r(gDebugMenu->objFont, string, 1, 4);
        sprite_set_anim(gSpriteHandler, gDebugMenu->counter, textAnim->frames, 0, 0, 0, 0);
    }

    gDebugMenu->page = targetPage;
    gDebugMenu->row = targetRow;

    for (i = 0; i < DEBUG_MENU_ENTRY_PER_PAGE; i++) {
        if (gDebugMenu->textLines[i] > -1) {
            sprite_set_base_palette(gSpriteHandler, gDebugMenu->textLines[i], 0);
        }
    }

    sprite_set_base_palette(gSpriteHandler, gDebugMenu->textLines[gDebugMenu->row], 7);
    sprite_set_x_y(gSpriteHandler, gDebugMenu->cursor, 16, (gDebugMenu->row * 18) + 32);
}
