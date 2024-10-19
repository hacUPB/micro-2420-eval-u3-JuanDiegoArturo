/*
 * Copyright 2019 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/*****************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 ****************************************/

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************
!!GlobalInfo
product: Pins v7.0
processor: MKE18F512xxx16
package_id: MKE18F512VLL16
mcu_data: ksdk2_0
processor_version: 0.7.2
board: HVP-KE18F
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS *****
 */
/* clang-format on */

#include "fsl_common.h"
#include "fsl_port.h"
#include "fsl_gpio.h"
#include "pin_mux.h"

/* FUNCTION ************************************
 *
 * Function Name : BOARD_InitBootPins
 * Description   : Calls initialization functions.
 *
 * END **************************************/
void BOARD_InitBootPins(void)
{
    BOARD_InitPins();
}

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************
BOARD_InitPins:
- options: {callFromInitBoot: 'true', coreID: core0, enableClock: 'true'}
- pin_list:
  - {pin_num: '23', peripheral: GPIOE, signal: 'GPIO, 9', pin_signal: ACMP2_IN2/DAC0_OUT/PTE9/FTM0_CH7/LPUART2_CTS, direction: OUTPUT}
  - {pin_num: '92', peripheral: CoreDebug, signal: TRACE_SWO, pin_signal: PTA10/FTM1_CH4/LPUART0_TX/FXIO_D0/JTAG_TDO/noetm_Trace_SWO, pull_select: down, pull_enable: disable}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS *****
 */
/* clang-format on */

/* FUNCTION ************************************
 *
 * Function Name : BOARD_InitPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END **************************************/
void BOARD_InitPins(void)
{
    /* Clock Control: Clock enabled */
    CLOCK_EnableClock(kCLOCK_PortA);
    /* Clock Control: Clock enabled */
    CLOCK_EnableClock(kCLOCK_PortE);

    gpio_pin_config_t LED_RED_config = {
        .pinDirection = kGPIO_DigitalOutput,
        .outputLogic = 0U
    };

    gpio_pin_config_t Entrada_config = {
         .pinDirection = kGPIO_DigitalInput,
		 .outputLogic = 0U
    };
    /* Initialize GPIO LED */
    GPIO_PinInit(BOARD_INITPINS_LED_RED_GPIO, BOARD_INITPINS_LED_RED_PIN, &LED_RED_config);

    //GPIO Filas ---> Salidas
    GPIO_PinInit(BOARD_INITPINS_LED_RED_GPIO, BOARD_INITPINS_FIL1_PIN, &LED_RED_config);
    GPIO_PinInit(BOARD_INITPINS_LED_RED_GPIO, BOARD_INITPINS_FIL2_PIN, &LED_RED_config);
    GPIO_PinInit(BOARD_INITPINS_LED_RED_GPIO, BOARD_INITPINS_FIL3_PIN, &LED_RED_config);
    GPIO_PinInit(BOARD_INITPINS_LED_RED_GPIO, BOARD_INITPINS_FIL4_PIN, &LED_RED_config);

    //GPIO Columnas ---> Entradas
    GPIO_PinInit(BOARD_INITPINS_LED_RED_GPIO, BOARD_INITPINS_COL1_PIN, &Entrada_config);
    GPIO_PinInit(BOARD_INITPINS_LED_RED_GPIO, BOARD_INITPINS_COL2_PIN, &Entrada_config);
    GPIO_PinInit(BOARD_INITPINS_LED_RED_GPIO, BOARD_INITPINS_COL3_PIN, &Entrada_config);
    GPIO_PinInit(BOARD_INITPINS_LED_RED_GPIO, BOARD_INITPINS_COL4_PIN, &Entrada_config);

    /* PORTA10 (pin 92) is configured as noetm_Trace_SWO */
    PORT_SetPinMux(PORTA, 10U, kPORT_MuxAlt7);

    PORTA->PCR[10] = ((PORTA->PCR[10] &
                       /* Mask bits to zero which are setting */
                       (~(PORT_PCR_PS_MASK | PORT_PCR_PE_MASK | PORT_PCR_ISF_MASK)))

                      /* Pull Select: Internal pulldown resistor is enabled on the corresponding pin, if the
                       * corresponding PE field is set. */
                      | PORT_PCR_PS(kPORT_PullDown)

                      /* Pull Enable: Internal pullup or pulldown resistor is not enabled on the corresponding
                       * pin. */
                      | PORT_PCR_PE(kPORT_PullDisable));

    /*MUX LED*/
    PORT_SetPinMux(BOARD_INITPINS_LED_RED_PORT, BOARD_INITPINS_LED_RED_PIN, kPORT_MuxAsGpio);

    //MUX Filas
    PORT_SetPinMux(BOARD_INITPINS_LED_RED_PORT, BOARD_INITPINS_FIL1_PIN, kPORT_MuxAsGpio);
    PORT_SetPinMux(BOARD_INITPINS_LED_RED_PORT, BOARD_INITPINS_FIL2_PIN, kPORT_MuxAsGpio);
    PORT_SetPinMux(BOARD_INITPINS_LED_RED_PORT, BOARD_INITPINS_FIL3_PIN, kPORT_MuxAsGpio);
    PORT_SetPinMux(BOARD_INITPINS_LED_RED_PORT, BOARD_INITPINS_FIL4_PIN, kPORT_MuxAsGpio);

    //MUX Columnas

    PORT_SetPinMux(BOARD_INITPINS_LED_RED_PORT, BOARD_INITPINS_COL1_PIN, kPORT_MuxAsGpio);
    PORT_SetPinMux(BOARD_INITPINS_LED_RED_PORT, BOARD_INITPINS_COL2_PIN, kPORT_MuxAsGpio);
    PORT_SetPinMux(BOARD_INITPINS_LED_RED_PORT, BOARD_INITPINS_COL3_PIN, kPORT_MuxAsGpio);
    PORT_SetPinMux(BOARD_INITPINS_LED_RED_PORT, BOARD_INITPINS_COL4_PIN, kPORT_MuxAsGpio);

    PORTE->PCR[9] = ((PORTE->PCR[9] &
                           /* Mask bits to zero which are setting */
                           (~(PORT_PCR_PS_MASK | PORT_PCR_PE_MASK | PORT_PCR_ISF_MASK)))

                          /* Pull Select: Internal pulldown resistor is enabled on the corresponding pin, if the
                           * corresponding PE field is set. */
                          | PORT_PCR_PS(kPORT_PullUp)

                          /* Pull Enable: Internal pullup or pulldown resistor is not enabled on the corresponding
                           * pin. */
						  | PORT_PCR_PE(kPORT_PullUp  ));



    PORTE->PCR[10] = ((PORTE->PCR[10] &
                               /* Mask bits to zero which are setting */
                               (~(PORT_PCR_PS_MASK | PORT_PCR_PE_MASK | PORT_PCR_ISF_MASK)))

                              /* Pull Select: Internal pulldown resistor is enabled on the corresponding pin, if the
                               * corresponding PE field is set. */
                              | PORT_PCR_PS(kPORT_PullUp)

                              /* Pull Enable: Internal pullup or pulldown resistor is not enabled on the corresponding
                               * pin. */
							  | PORT_PCR_PE(kPORT_PullUp  ));

    PORTE->PCR[11] = ((PORTE->PCR[11] &
                                   /* Mask bits to zero which are setting */
                                   (~(PORT_PCR_PS_MASK | PORT_PCR_PE_MASK | PORT_PCR_ISF_MASK)))

                                  /* Pull Select: Internal pulldown resistor is enabled on the corresponding pin, if the
                                   * corresponding PE field is set. */
                                  | PORT_PCR_PS(kPORT_PullUp)

                                  /* Pull Enable: Internal pullup or pulldown resistor is not enabled on the corresponding
                                   * pin. */
								  | PORT_PCR_PE(kPORT_PullUp  ));


    PORTE->PCR[12] = ((PORTE->PCR[12] &
                                   /* Mask bits to zero which are setting */
                                   (~(PORT_PCR_PS_MASK | PORT_PCR_PE_MASK | PORT_PCR_ISF_MASK)))

                                  /* Pull Select: Internal pulldown resistor is enabled on the corresponding pin, if the
                                   * corresponding PE field is set. */
                                  | PORT_PCR_PS(kPORT_PullUp)

                                  /* Pull Enable: Internal pullup or pulldown resistor is not enabled on the corresponding
                                   * pin. */
                                  | PORT_PCR_PE(kPORT_PullUp  ));
}
/*****************************************
 * EOF
 ****************************************/
